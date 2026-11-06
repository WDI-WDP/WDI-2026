#include<stdio.h>

int main(){
    float a,b;
    char znak;
    printf("Podaj pierwsza liczbe: ");
    scanf("%f",&a);
    printf("Podaj druga liczbe: ");
    scanf("%f",&b);
    printf("Podaj znak dzialania [+,-,*,/,%%]: \n");
    scanf(" %c",&znak);


    switch(znak){
        case '+':
            printf("Wynik: %f", a+b);
            break;
        case '-':
            printf("Wynik: %f", a-b);
            break;
        case '*':
            printf("Wynik: %f", a*b);
            break;
        case '/':
            if(b!=0)
                printf("Wynik: %f", a/b);
            else
                printf("Nie mozna dzielic przez 0");
            break;
        case '%':
            if((int)b!=0)
                printf("Wynik: %d", (int)a%(int)b);
            else
                printf("Nie mozna dzielic przez 0");
            break;
        default:
            printf("Nieprawidlowy znak");
    }
    return 0;
}