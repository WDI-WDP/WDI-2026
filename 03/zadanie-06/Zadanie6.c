#include<stdio.h>
float Srednia(int tablica[]){
    int suma=0;
    for(int i=0;i<5;i++){
        suma=suma+tablica[i];
    }
    return (float)suma/5;
}

int main(){
    int tablica[5];
    for(int i=0;i<5;i++){
        printf("Podaj %d wartosc: ",i+1);
        scanf("%d",&tablica[i]);
    }
    float srednia = Srednia(tablica);
    printf("Elementy wieksze od sredniej: ");
    for(int i=0;i<5;i++){
        if (tablica[i]>srednia){
            printf("%d ",tablica[i]);
        }
    }

    return 0;
}