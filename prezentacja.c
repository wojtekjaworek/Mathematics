#include "wektory3d.h"
#include <stdio.h>


int main() {


printf("Prezentacja\n");

wektor3d a;
wektor3d b;


printf("Podaj wspolrzedne x,y,z pierwszego wektora: ");
scanf("%f %f %f", &a.x, &a.y, &a.z);


printf("Podaj wspolrzedne x,y,z drugiego wektora: ");
scanf("%f %f %f", &b.x, &b.y, &b.z);


printf("Iloczyn skalarny wektorow a i b: %f\n", iloczyn_skalarny(a,b));
printf("Iloczyn wektorowy wektorow a i b: [%f,%f,%f]\n", iloczyn_wektorowy(a,b).x,iloczyn_wektorowy(a,b).y,iloczyn_wektorowy(a,b).z);
printf("Dlugosc wektora a: %f\n", dlugosc_wektora(a));
printf("Suma wektorow a+b: [%f,%f,%f]\n", suma_wektorow(a,b).x,suma_wektorow(a,b).y,suma_wektorow(a,b).z);
printf("Suma wektorow a-b: [%f,%f,%f]\n", roznica_wektorow(a,b).x,roznica_wektorow(a,b).y,roznica_wektorow(a,b).z);
printf("Czy a i b sa prostopadle? %d\n", czy_prostopadle(a,b));
printf("Czy a i b sa rownolegle? %d\n", czy_rownolegle(a,b));

    return 0;
}
