#include<stdio.h>
int main(){
    float a,b,c,d,e,srednia;
    printf("Podaj piec ocen po enterze: \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%f",&e);
    srednia=(a+b+c+d+e)/5;
    printf("%f",srednia);
    return 0;
}