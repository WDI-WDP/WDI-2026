#include<stdio.h>
int main(){
    int a;
    printf("Podaj liczbe calkowita: ");
    scanf("%d",&a);
    if(a>0 && a%2==0)
        printf("Liczba %d jest jednoczesnie dodatnia i parzysta\n",a);
    else
        printf("Liczba %d nie jest jednoczesnie dodatnia i parzysta\n",a);

    return 0;
}