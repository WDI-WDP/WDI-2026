#include<stdio.h>

int main(){
    int a,b=0,c=0,suma=0;
    float i=0,srednia=0;
    printf("Podawaj liczby do zakonczenia programu: \n");
    do
    {
        scanf("%d",&a);
        i++;
        if (i==1)
        {
            b=a;
            c=a; 
        }
        if (b<a)
            b=a;
        if (c>a)
            c=a;
        suma=suma+a;
    } while (a%2!=0);
    srednia=suma/i;
    printf("najwieksza: %d, najmniejsza: %d, suma: %d, srednia: %f",b,c,suma,srednia);
    
    return 0;
}