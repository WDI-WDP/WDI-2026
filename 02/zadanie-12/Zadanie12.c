#include<stdio.h>
void dodawanie_n_liczb(){
    int a;
    float suma=0,liczba;
    printf("\nPodaj liczbe naturalna: ");
    scanf("%d",&a);
    if(a>=0){
        for(int i=1; i<=a;i++){
            printf("Podaj %d liczbe: ",i);
            scanf("%f",&liczba);
            suma=suma+liczba;
        }
        printf("\nSuma %d liczb to: %f\n\n",a,suma);
    }
    else
        printf("To nie jest liczba naturalna!\n\n");
}

void odejmowanie_do_zera(){
        float odjemnik,odjemna;
    printf("\nPodaj liczbe od ktorej bedziesz odejmowac: \n");
    scanf("%f",&odjemna);
    printf("Podawaj odjemniki do zakonczenia programu: \n");
    do
    {
        scanf("%f",&odjemnik);
        odjemna=odjemna-odjemnik;
    } while (odjemnik!=0);
    printf("Wynik: %f\n\n",odjemna);
}

void mnozenie_dwoch_liczb(){
    float a,b;
    printf("\nPodaj pierwsza liczbe: ");
    scanf("%f",&a);
    printf("Podaj druga liczbe: ");
    scanf("%f",&b);
    printf("Wynik: %f\n\n",a*b);
}

void dzielenie_liczby(){
    float a,b;
    printf("\nPodaj pierwsza liczbe: ");
    scanf("%f",&a);
    printf("Podaj druga liczbe: ");
    scanf("%f",&b);
    if(b!=0)
        printf("Wynik: %f\n\n",a/b);
    else
        printf("Nie mozna dzielic przez 0!\n\n");
}

void potegowanie(){
    float liczba,wynik=1;
    int wykladnik;
    printf("\nPodaj liczbe: ");
    scanf("%f",&liczba);
    printf("Podaj wykladnik: ");
    scanf("%d",&wykladnik);
    if (liczba==0&&wykladnik<0){
        printf("Nie mozna podniesc 0 do potegi ujemnej\n\n");
    }
    else{
        if (wykladnik<0){
                wykladnik=wykladnik*-1;
                for(int i=1;i<=wykladnik;i++){
                    wynik=(wynik*liczba);
                }
                printf("Wynik: %f\n\n",1/wynik);
        }

        else{
            for(int i=1;i<=wykladnik;i++){
                wynik=wynik*liczba;
            }
            printf("Wynik: %f\n\n",wynik);
        }
    }
}

void kwadrat_liczby(){
    float liczba;
    printf("\nPodaj liczbe: ");
    scanf("%f",&liczba);
    printf("Wynik: %f\n\n",liczba*liczba);
}

void silnia(){
    int a;
    unsigned long long wynik=1;
    printf("\nPodaj liczbe: ");
    scanf("%d",&a);
    if(a>=0){
        for(int i=a;i>0;i--){
            wynik=wynik*i;
        }
        printf("Wynik: %llu\n\n",wynik);
    }
    else
        printf("Silnia dla nieujemnych!\n\n");
}

int main(){
    char wybor;
    while(1)
    {    
    printf("[MENU KALKULATORA]\n");
    printf("Dodawanie n liczb [1]\n");
    printf("Odejmowanie od liczby, az do podania '0' [2]\n");
    printf("Mnozenie dwoch liczb [3]\n");
    printf("Dzielenie liczby [4]\n");
    printf("Potegowanie [5]\n");
    printf("Kwadrat liczby [6]\n");
    printf("Silnia [7]\n");\
    printf("Zakoncz [inny znak]\n\n");

    printf("Podaj jakie obliczenie chcesz wykonac: ");
    scanf(" %c",&wybor);
    switch (wybor)
    {
    case '1':
        dodawanie_n_liczb();
        break;
    case '2':
        odejmowanie_do_zera();
        break;
    case '3':
        mnozenie_dwoch_liczb();
        break;
    case '4':
        dzielenie_liczby();
        break;
    case '5':
        potegowanie();
        break;
    case '6':
        kwadrat_liczby();
        break;
    case '7':
        silnia();
        break;
    default:
    return 0;
    }

    }
    return 0;
}