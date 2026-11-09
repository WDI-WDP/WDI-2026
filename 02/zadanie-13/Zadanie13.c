#include<stdio.h>

unsigned long long fibonacci(int n){
    unsigned long long a=0,b=1;
    unsigned long long wynik=0;
    if(n>2){
        for(int i=2;i<n;i++){
            wynik=a+b;
            a=b;
            b=wynik;
        }
    }
    else if(n==1)
        wynik=0;
    else
        wynik=1;

    return wynik;
}

int main(){
    int n;
    printf("Ktory wyraz Ciagu Fibonacciego wyswietlic: ");
    scanf("%d",&n);
    if(n>0)
        printf("%d wyraz Ciagu Fibonacciego to %llu\n",n,fibonacci(n));
    else
        printf("Wyraz ciagu musi byc liczba dodatnia!\n");  
}