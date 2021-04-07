//
// Created by stopp on 30/09/2020.
//

#include "ratio.h"
#include "iostream"
#include "array"

using namespace std;


void ratio::input(int &a, int &b) {

    cout << "Veuillez entrer le nominateur du nombre rationnel." << endl;
    cin >> a;

    while (b==0){
        cout << "Veuillez entrer le denominateur du nombre rationnel (nombre different de zero)." << endl;
    cin >> b;
    }

}

void ratio::affiche(int a, int b, int c, int d) {
    cout << "Premier nombre rationel : " << a << "/" << b << endl;
    cout << "Second nombre rationel : " << c << "/" << d << endl;
}

array<int, 2> ratio::ajouter(int a, int b, int c, int d) {
    array<int, 2> result{};
    result[0] = a * d + b * c;
    result[1] = b * d;
    return result;

}

array<int, 2> ratio::multiplier(int a, int b, int c, int d) {
    array<int, 2> result{};
    result[0] = a * c;
    result[1] = b * d;
    return result;
}

float ratio::valeur(array<int, 2> result) {
    int a{result[0]};
    int b{result[1]};
    float c{(float) a / (float) b};
    return c;
}

array<int, 2> ratio::inverse(array<int, 2> result) {
    int a{result[0]};
    int b{result[1]};
    array<int, 2> invert{};
    invert[0] = b;
    invert[1] = a;
    return invert;
}

void ratio::PGCD(array<int, 2> &import) {
    int a{import[0]}, b{import[1]}, c;
    do {
        c = a % b;
        a = b;
        b = c;
    } while (c != 0);

    int pgcd{a};
    import[0] /= pgcd;
    import[1] /= pgcd;
}

array<string, 4> ratio::isNegatif(int a, int b) {
    array<string, 4> isNeg{};
    if (a < 0 && b < 0) {
        isNeg[0] = " (";
        isNeg[1] = to_string(a * (-1));
        isNeg[2] = to_string(b * (-1));
        isNeg[3] = " ";
    } else if (a < 0) {
        isNeg[0] = " -(";
        isNeg[1] = to_string(a * (-1));
        isNeg[2] = to_string(b);
        isNeg[3] = ")";
    } else if (b < 0) {
        isNeg[0] = " -(";
        isNeg[1] = to_string(a);
        isNeg[2] = to_string(b * (-1));
        isNeg[3] = " ";
    } else {
        isNeg[0] = " (";
        isNeg[1] = to_string(a);
        isNeg[2] = to_string(b);
        isNeg[3] = " ";
    }
    return isNeg;
}