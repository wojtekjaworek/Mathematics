#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int i;
    printf("Podaj liczbe naturalna: ");
    do{
        scanf("%d",&i);
    }while(i<=0); // petla do while, aby zapobiec podania liczby ujemnej lub zera
     

    //skoro ma to być tabliczka mnozenia, wykorzystajmy prawdziwe tablice ;) a nie tylko printf w pętli...
    int **tab;

    tab = malloc(i*sizeof(int*)); //dynamiczne tworzenie tablicy o wymiarze i x i (tak naprawdę to tablicy tablic, w jezyku c nie istnieja tablice wiecej niz jednowymiarowe)

    for(int it = 0; it<i;it++){
        tab[it] = malloc(i*sizeof(int));
    }

    for(int m=1;m<=i;m++) { // zagnieżdżona pętla do obliczania tabliczni mnozenia
        for(int n=1;n<=i;n++) {
            tab[m-1][n-1] = m*n;
        }
    }

    for(int m=1;m<=i;m++) { // petle do wyswietlania tablicy
        for(int n=1;n<=i;n++) {
            printf("%d ", tab[m-1][n-1]);
        }
        printf("\n");//oddzielamy kolejne wiersze 
    }



    return 0;

}