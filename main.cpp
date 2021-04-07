#include <iostream>
#include "ratio.h"

int main() {

    int a{0}, b{0}, c{0}, d{0};

    array<int, 2> resultAd{};
    array<int, 2> resultMul{};
    array<int, 2> adInvert{};
    array<string, 4> negatif{};
    array<string, 4> negatifMul{};
    array<string, 4> negatifAdd1{};
    array<string, 4> negatifAdd2{};


    ratio ratio;
    ratio.input(a, b);
    ratio.input(c, d);
    ratio.affiche(a, b, c, d);
    resultAd = ratio.ajouter(a, b, c, d);
    resultMul = ratio.multiplier(a, b, c, d);
    //Innitialiser adInvert
    negatif = ratio.isNegatif(b, d);
    negatifMul = ratio.isNegatif(a, c);
    negatifAdd1 = ratio.isNegatif(a, d);
    negatifAdd2 = ratio.isNegatif(c, b);
    ratio.PGCD(resultAd);
    ratio.PGCD(resultMul);


    cout << "Addition : " << endl;
    if (resultAd[0] % resultAd[1] == 0) {
        cout << a << "/" << b << " + " << c << "/" << d << " = " << ratio.valeur(resultAd) << endl;
    } else {
        cout << a << "/" << b << " + " << c << "/" << d << " = " << resultAd[0] << "/" << resultAd[1] << endl;
    };

    if (resultAd[0] != 0) {
        adInvert = ratio.inverse(resultAd);
        if (adInvert[0] % adInvert[1] == 0) {
            cout << "Son inverse : " << ratio.valeur(adInvert) << endl;

        } else {
            cout << "Son inverse : " << adInvert[0] << "/" << adInvert[1] << endl;
        };

    } else { cout << "Le nombre n'a pas d'inverse, en effet a = 0." << endl; }


    cout << "Multiplication : " << endl;
    if (resultMul[0] % resultMul[1] == 0) {
        cout << a << "/" << b << " x " << c << "/" << d << " = " << ratio.valeur(resultMul) << endl;
    } else {
        cout << a << "/" << b << " x " << c << "/" << d << " = " << resultMul[0] << "/" << resultMul[1] << endl;
    };


    return 0;
}