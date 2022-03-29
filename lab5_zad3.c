
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


int symbol_newtona(int n, int k) {
    /*
        obliczamy symbol newtona zdefiniowany jako n po k = n!/k!(n-k)!
    */
   
    int symbol = silnia(n)/(silnia(k)*silnia(n-k));

    return symbol;
}

int main() {

    int n;
    printf("Podaj liczbe do policzenia silni ( dopuszczalny zakres to [0,500] ): ");
    do{
        scanf("%d",&n);
    }while(n<0 || n>500);

    printf("Silnia z %d to %d\n",n , silnia(n));

    int m;
    printf("Podaj liczbe m, dla dwumianu Newtona (x+y)^m: ");
    do{
        scanf("%d", &m);
    }while(m<0);

    //rozwiniecie (x+y)^m z wzoru dwumianowego Newtona, wykorzystując symbole Newtona
    printf("(x+y)^%d = ",m);
    int k=0;
    for(k;k<=m;k++) {
        printf("%d x^%d y^%d + ", symbol_newtona(m,k), m-k, k);
    }



    // budowa trojkata Pascala dla wskazanego wczesniej m
    for(k=0;k<=n;k++) {
        printf(" "); //m razy
        printf("dwumian"); //dwumian, spacje pomiedzy wspolczynnikami
    }


    return 0;
}