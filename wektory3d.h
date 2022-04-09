#ifndef WEKTORY3D_H_INCLUDED
#define WEKTORY3D_H_INCLUDED



typedef struct { // struktura danych dla wektora3d, tak aby do zmiennych odwolywac sie przez .x .y .z
    float x;
    float y;
    float z;
}wektor3d;


float dlugosc_wektora(wektor3d v);

wektor3d suma_wektorow(wektor3d v, wektor3d u);

wektor3d roznica_wektorow(wektor3d v, wektor3d u);

float iloczyn_skalarny(wektor3d u, wektor3d v);

wektor3d iloczyn_wektorowy(wektor3d u, wektor3d v);

int czy_prostopadle(wektor3d u, wektor3d v);

int czy_rownolegle(wektor3d v, wektor3d u);





#endif // WEKTORY3D_H_INCLUDED
