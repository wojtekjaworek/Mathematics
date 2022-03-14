#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int ile;
    printf("Ile poczatkowych liczb naturalnych, podzielnych przez 7 wydrukowac? ");
    do{
        scanf("%d",&ile); 
    }while(ile<=0); // petla do while, aby zapobiec podania liczby ujemnej lub zera
     


    for (int i = 0; i<ile; i++) { // petla powtorzy sie 'ile' razy
        if(i != ile-1) printf("%d, ", 7*i); //drukowanie z przecinkiem
        else printf("%d ", 7*i); // dla ostatniej liczby bez przecinka
    }
    
    return 0;

}