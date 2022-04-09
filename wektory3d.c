#include "wektory3d.h"
#include <math.h>

float dlugosc_wektora(wektor3d v) {
    float dlugosc = sqrt( v.x*v.x + v.y*v.y + v.z*v.z ); // pierwiastek z sumy kwadratow wspolrzednych

    return dlugosc;
}

wektor3d suma_wektorow(wektor3d v, wektor3d u) {

    wektor3d suma;

    suma.x = v.x + u.x;
    suma.y = v.y + u.y;
    suma.z = v.z + u.z;


    return suma;
}

wektor3d roznica_wektorow(wektor3d v, wektor3d u) {

    wektor3d suma;

    suma.x = v.x - u.x;
    suma.y = v.y - u.y;
    suma.z = v.z - u.z;


    return suma;
}


float iloczyn_skalarny(wektor3d u, wektor3d v) { // implementujemy jako sume iloczynu po wspolrzednych

    float iloczyn = u.x*v.x + u.y*v.y + u.z*v.z;

    return iloczyn;
}


wektor3d iloczyn_wektorowy(wektor3d u, wektor3d v) {

    wektor3d iloczyn;
    //skorzystamy z wyznacznika macierzy 3x3

    iloczyn.x = u.y*v.z - u.z*v.y;
    iloczyn.y = u.z*v.x - u.x*v.z;
    iloczyn.z = u.x*v.y - u.y*v.x;


    return iloczyn;
}

int czy_prostopadle(wektor3d u, wektor3d v) {
    float il_skal = iloczyn_skalarny(u,v);
    if(il_skal == 0.0) {
        return 1;
    }
    else {
        return 0;
    }
}


int czy_rownolegle(wektor3d v, wektor3d u) {
    wektor3d il_wekt = iloczyn_wektorowy(v,u);

    if(il_wekt.x == 0 && il_wekt.y == 0 && il_wekt.z == 0) {
        return 1;
    }
    else {
        return 0;
    }


}

