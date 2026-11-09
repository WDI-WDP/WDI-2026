#include<stdio.h>
int main(){
    float a,n,suma,srednia;
    suma=0;
    printf("Podaj liczbe naturalna\n");
    scanf("%f",&n);
    if(n>=0)
    {
        printf("Podaj %.0f liczb po enterze: \n",n);
        for(int i=n;i>0;i--)
        {
            scanf("%f",&a);
            suma=suma+a;
        }
        srednia=suma/n;
        printf("Suma: %.0f, Srednia: %f",suma,srednia);
    }
    else
        printf("To nie jest liczba naturalna!\n");
    return 0;
}