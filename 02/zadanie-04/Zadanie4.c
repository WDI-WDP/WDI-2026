#include<stdio.h>

int main(){
    float a=0,b=0;
    char znak='+', wybor;
    do
    {
            printf("\nAktualne dzialanie: %f %c %f = ",a,znak,b);
    
    switch(znak){
            case '+':
                printf("%f\n", a+b);
                break;
            case '-':
                printf("%f\n", a-b);
                break;
            case '*':
                printf("%f\n", a*b);
                break;
            case '/':
                if(b!=0)
                    printf("%f\n", a/b);
                else
                    printf("Nie mozna dzielic przez 0\n");
                break;
            case '%':
                if((int)b!=0)
                    printf("%d\n",(int)a%(int)b);
                else
                    printf("Nie mozna dzielic przez 0\n");
                break;
            default:
                printf("Nieprawidlowy znak\n");
            }

    printf("\nZmiana pierwszej liczby [1]\nZmiana drugiej liczby [2]\nWybor dzialania [3]\nZakoncz program [Inny Znak]\n\n");
    printf("Twoj wybor: ");
    scanf(" %c",&wybor);
    switch(wybor){
        case '1':
            printf("Podaj pierwsza liczbe: ");
            scanf("%f",&a);
            break;
        case '2':
            printf("Podaj druga liczbe: ");
            scanf("%f",&b);
            break;
        case '3':
            printf("Podaj znak dzialania [+,-,*,/,%%]: ");
            scanf(" %c",&znak);
            break;
        default:
            break;
    }
    } while (wybor=='1'||wybor=='2'||wybor=='3');
    
    
    return 0;
}