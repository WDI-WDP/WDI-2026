#include<stdio.h>
int main(){
    int a,b,mniejsza,wieksza;
    printf("Podaj dwie liczby calkowite po enterze: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<b)
    {
        printf("Wieksza: %d\n",b);
        printf("Mniejsza: %d\n",a);
        printf("%d<%d\n",a,b);
    }
    else if(b<a)
    {
        printf("Wieksza: %d\n",a);
        printf("Mniejsza: %d\n",b);
        printf("%d>%d\n",a,b);
    }
    else
    {
        printf("Wieksza: liczby sa takie same\n");
        printf("Mniejsza: liczby sa takie same\n");
        printf("%d=%d\n",a,b);
    }
        return 0;
}