#include <stdio.h>
#include <math.h>


int silnia(int n) { // rekurencyjnie zadana funkcja liczaca silnie z n
    int wynik;

    if(n==0) {
        wynik = 1; // gdy dojdziemy do 0 to funkcja nie odwola sie rekurencyjnie do n-1 tylko zwroci ostateczna wartosc
    }
    else {
        wynik = n * silnia(n-1);
    }


    return wynik;
}

int main() {


    int n;
    printf("Podaj liczbe do policzenia silni ( dopuszczalny zakres to [0,500] ): ");
    do{
    scanf("%d",&n);
    }while(n<0 || n>500);

    printf("Silnia z %d to %d",n , silnia(n));


    return 0;
}
