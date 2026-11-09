#include<stdio.h>
int main(){
    char imie[50];
    int wiek;
    printf("Podaj swoje imie: ");
    scanf("%s",&imie);
    printf("Podaj swoj wiek: ");
    scanf("%d",&wiek);
    printf("Inicjal: %c, wiek: %d\n",imie[0],wiek);
    return 0;
}