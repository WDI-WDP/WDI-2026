#include<stdio.h>
float potega(float liczba, int wykladnik){
    float wynik=1;
    if (liczba==0&&wykladnik<0){
        printf("Nie mozna podniesc 0 do potegi ujemnej\n");
        return 0;
    }
    else{
    if (wykladnik<0){
            wykladnik=wykladnik*-1;
            for(int i=1;i<=wykladnik;i++){
                wynik=(wynik*liczba);
            }
            wynik=1/wynik;
    }

    else{
        for(int i=1;i<=wykladnik;i++){
            wynik=wynik*liczba;
    }
    }
    return wynik;
    }
}

int main(){
    int wykladnik;
    float liczba;
    printf("Podaj liczbe: ");
    scanf("%f",&liczba);
    printf("Podaj wykladnik: ");
    scanf("%d",&wykladnik);
    printf("Wynik: %f\n",potega(liczba,wykladnik));
    return 0;
}