#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#define N 2 // wymiar do zadania 1
#define M 3 // wymiar do zadania 3

using namespace std;

int main()
{

    int liczba;
    cout<<"Podaj liczbe: " << endl;
    cin>>liczba;

    int tab[100]; // dosc duzy rozmiar tablicy aby na pewno miec miejsce dla dowolnej podanej liczby

    for (int i=0;i<100;i++) {
        /*
        Podana liczbe w systemie osemkowym rozdzielamy na poszczegolne cyfry i zapisujemy do tablicy
        
        W ODWROCONEJ KOLEJNOSCI!!

        123 zostanie przypisane w tablicy jako {3, 2, 1, 0, 0..., 0}
        itp.


        */
        tab[i] = static_cast<int>(liczba/pow(10,i))%10; 
    }
    

    int dec =0; // zmienna przechowujaca wynik konwersji oct2dec

    for (int i =0; i<100; i++) {
        dec += tab[i] * pow(8,i);
        /* zmieniona kolejnosc w tablicy ułatwia konwersje poniewaz potegi sa teraz ulozone w kolejnosci rosnacej od 0
        */
    }


    cout << "Wynik konwersji liczby osemkowej" << liczba << " do dziesietnej to: " << dec << endl;


    return 0;

}
