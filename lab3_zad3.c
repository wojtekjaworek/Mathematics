#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int ile;
    char s = ' ';
    char x = 'x';
    printf("Podaj liczbe naturalna wieksza od 4:");
    do{
        scanf("%d",&ile); 
    }while(ile<=4); // petla do while, aby zapobiec podania liczby mniejszej niz 4

   for (int i=1;i<=ile;i++) {
        if(i==1) {
            for (int it=0;it<ile-i;it++) { // n-i spacji
                printf(" ");
            }
            //tutaj jest x
            printf("x");
       }
       else if (i == ile) {
           for (int it=0;it<ile;it++) { // konczacy wiersz
                printf("x");
            }
       }
       else {
           for (int it=0;it<ile-i;it++) { // n-i spacji
                printf(" ");
            }
            printf("x");

            //tutaj sa spacje pomiedzy x
            for(int it=0;it<i-2;it++) {
                printf(" ");
            }
            printf("x");
        }
        printf("\n");
   }
    return 0;

}