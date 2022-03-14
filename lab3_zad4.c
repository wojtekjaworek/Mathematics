#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a, b;

    printf("Podaj przedzial [a,b] w ktorym szukamy trojek pitagorejskich: \n");
    printf("a: ");
    do{
        scanf("%d",&a); 
    }while(a<=0); // petla do while, aby zapobiec podania liczby mniejszej niz 1

    printf("b: ");
    do{
        scanf("%d",&b); 
    }while(b<=a); // petla do while, aby zapobiec podania liczby mniejszej niz a

    for (int i=a;i<b;i++) { 
        for (int j=i+1;j<b;j++) { 
            for (int k=j+1;k<=b;k++) {
                if(i*i + j*j == k*k) { 
                    printf("%d %d %d\n", i,j,k); 
                }
            }
        }
    }

    return 0;

}