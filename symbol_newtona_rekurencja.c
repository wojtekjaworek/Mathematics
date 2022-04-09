#include <math.h>
#include <stdio.h>



int symbol(int n, int k) {
    int wynik;

    if(n>=k) {
        if(k==0 || k==n) {
            return 1;
        }
        else {
            wynik = symbol(n-1,k-1) + symbol(n-1,k);
        }

    }

    else {
        return -1; // -1 zwracane jesli podalismy bledne dane!!!! n nie moze byc mniejsze od k
    }
    return wynik;
}


int main() {

int n;
printf("Podaj n do wypisania trojkata pascala: ");
scanf("%d",&n);


// tworzymy trojkat pascala
for (int i =0; i<=n;i++) { // iterujemy od zera do n
    for(int k = 0;k<=i;k++) {// iterujemy od zera do i, bo w dwumianie newtona liczba na dole nie moze byc wieksza niz ta u gory
    printf("%d ", symbol(i,k)); // wypisz symbol dla aktualnego i oraz k
    }
    printf("\n");
}
return 0;
}