#include<stdio.h>
int suma_cyfr(int a){
    if (a!=0){
        return (a%10)+suma_cyfr(a/10);
    }
    return 0;
}



int main(){
    int a;
    do{
        printf("Podaj nieujemna liczbe calkowita: ");
        scanf("%d",&a);
    }
    while(a<0);
    printf("Wynik: %d",suma_cyfr(a));
    return 0;
}