#include<stdio.h>

unsigned long long wyraz_ciagu(int n){
    unsigned long long a=1,b=2,c=3;
    unsigned long long wyraz;
    if (n==1){
        return 1;
    }
    else if (n==2){
        return 2;
    }
    else if (n==3){
        return 3;
    }
    else{
        for(int i=3;i<n;i++){
            wyraz=c*b-a;
            a=b;
            b=c;
            c=wyraz;
        }
        return wyraz;
    }
}

int main(){
    int n;
    printf("Podaj ktory wyraz ciagu chcesz wyswielic: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Liczba nie moze byc niedodatnia! \n");
    } 
    else{
        printf("%d wyraz to: %llu",n, wyraz_ciagu(n));
    }
        return 0;
}