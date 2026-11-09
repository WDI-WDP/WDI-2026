#include<stdio.h>

float potega(float liczba, float wykladnik){
    if (wykladnik>0)
        return liczba*potega(liczba,wykladnik-1);
    else if(wykladnik<0)
        return 1/potega(liczba,-wykladnik);
    else
       return 1;
}

int main(){
    int wykladnik;
    float liczba;
    printf("Podaj liczbe: ");
    scanf("%f",&liczba);
    printf("Podaj wykladnik: ");
    scanf("%d",&wykladnik);
    printf("Wynik: %f",potega(liczba,wykladnik));
    return 0;
}