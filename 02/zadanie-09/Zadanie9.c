#include<stdio.h>

unsigned long long silnia(int a){
    unsigned long long wynik=1;
        for(int i=a;i>0;i--){
            wynik=wynik*i;
        }
    return wynik;
}

int main(){
    int a;
    printf("Podaj liczbe: ");
    scanf("%d",&a);
    if(a>=0){
        printf("Wynik: %llu",silnia(a));
    }
    else
        printf("Silnia dla nieujemnych!\n\n");
    
    return 0;
}