#include<stdio.h>

unsigned long long suma_fibonacci(int n){
    unsigned long long a=0,b=1;
    unsigned long long wynik=0,suma=1;
    if(n>2){
        for(int i=2;i<n;i++){
            wynik=a+b;
            a=b;
            b=wynik;
            suma=suma+wynik;
        }
    }
    else if(n==1){
        suma=0;
    }
    else{
        suma=1;
    }

    return suma;
}

int main(){
    int n;
    printf("Sume ilu wyrazow Ciagu Fibonacciego wyswietlic: ");
    scanf("%d",&n);
    if(n>0)
        printf("suma %d wyrazow Ciagu Fibonacciego to %llu\n",n,suma_fibonacci(n));
    else
        printf("Liczba wyrazow ciagu musi byc dodatnia!\n");
    return 0;
}