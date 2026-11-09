#include<stdio.h>
#include<math.h>
int main(){
    float a,b,reszta;
    printf("Podaj dwie liczby: \n");
    scanf("%f",&a);
    scanf("%f",&b);
    if (b==0)
        printf("Nie mozna dzielic przez 0!\n");
    else
    {
        reszta=fmod(a,b);
        if(reszta==0)
            printf("Pierwsza liczba jest podzielna przez druga\n");
        else
            printf("Pierwsza liczba nie jest podzielna przez druga\n");
    }
        return 0;
}