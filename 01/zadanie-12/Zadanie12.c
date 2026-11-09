#include<stdio.h>
int main(){
    int a,suma;
    suma=0;
    printf("Podaj liczbe naturalna: ");
    scanf("%d",&a);
    if(a>=0){
        for(int i=(a-1); i>0;i--)
          suma=suma+i;
        printf("Suma wszystkich liczb mniejszych od %d, to %d\n",a,suma);
    }
    else
        printf("To nie jest liczba naturalna!\n");
    return 0;
}