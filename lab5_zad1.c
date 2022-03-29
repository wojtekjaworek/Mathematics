#include <stdio.h>
#include <math.h>

int main() {

    int n;
    printf("Podaj wymiar kwadratu do narysowania: ");
    do {
    scanf("%d", &n);
    } while(n<=0); // kwadrat nie moze byc wymiaru ujemnego lub zerowego

    for(int i=0;i<n;i++) { 
        for(int j=0;j<n;j++) {
            if(i==0) printf("x"); // gorna krawedz
            else if(i==n-1) printf("x"); // dolna krawedz
            else if(j==0) printf("x"); // lewa krawedz
            else if(j==n-1) printf("x"); // prawa krawedz
            else if(i==j && n>8) printf("x"); // przekatna nr 1
            else if(i+j == n-1 && n>8) printf("x"); // przekatna nr 2, rowna sie n-1 poniewaz numeracje zaczynamy od 0
            else printf(" ");



        }
        printf("\n"); // kolejna linijka
    }


    return 0;
}