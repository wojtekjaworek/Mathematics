#include <stdio.h>
#include <math.h>

int main() {


    int a;
    float odwrotnosc_n;


    printf("Podaj liczbe naturalna: ");
    do{
    scanf("%d", &a);
    }while(a<=0); // zabezpieczenie przed podaniem ujemnej

    odwrotnosc_n = 1.0 / a; // musi byc 1.0 zeby komputer wiedzial ze to liczba wymierna, a nie calkowita

    int n = 0; // musimy nadac wartosc poczatkowa 

    while(pow(1.0/2,n)>=odwrotnosc_n) { // odpoki 1/2 do n-tej jest wieksze petla sie powtarza
        n++;
        if(n==20) {
            printf("petla wykonala sie 20 razy!\n");
            break;
        }
    }

    if (n<20) {
        printf("szukane n to %d", n);
        printf("1/2^%d = %f < %f",n,pow(1.0/2,n), odwrotnosc_n);
    }



    return 0;
}