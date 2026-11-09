#include<stdio.h>

void bubble_sort(int tablica[]){
    int a;
    for(int j=0;j<10;j++){
        for(int i=0;i<9;i++){
            if(tablica[i]>tablica[i+1]){
                a=tablica[i+1];
                tablica[i+1]=tablica[i];
                tablica[i]=a;
            }
        }
    }
    printf("\nPosortowane wartosci: ");
    for(int i=0;i<10;i++){
        printf("%d ",tablica[i]);
    }
}

int main(){
    int tablica[10];
    for(int i=0;i<10;i++){
        printf("Podaj %d wartosc: ",i+1);
        scanf("%d",&tablica[i]);
    }
    bubble_sort(tablica);
    return 0;
}