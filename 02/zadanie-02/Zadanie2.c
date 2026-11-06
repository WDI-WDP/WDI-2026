#include<stdio.h>

int main(){
    int n,suma=0;
    printf("Podaj liczbe od 1 do 100: ");
    scanf("%d",&n);
    if (n<1||n>100)
        printf("Wybrana liczba jest poza zakresem\n");
    else
    {
        for(int i=1;i<n+1;i++)
            suma=suma+i*i;
        printf("Suma: %d",suma);
    }    
    return 0;
}