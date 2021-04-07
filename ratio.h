//
// Created by stopp on 30/09/2020.
//

#ifndef TP2_RATIO_H
#define TP2_RATIO_H

#include "string"
#include "array"

using namespace std;

class ratio {

public:
    void input(int &a, int &b);

    void affiche(int a, int b, int c, int d);

    array<int, 2> ajouter(int a, int b, int c, int d);

    array<int, 2> multiplier(int a, int b, int c, int d);

    float valeur(array<int, 2> result);

    array<int, 2> inverse(array<int, 2> result);

    void PGCD(array<int, 2> &import);

    array<string, 4> isNegatif(int a, int b);
};

#endif //TP2_RATIO_H