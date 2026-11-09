#include<stdio.h>

float Srednia(int tablica[]){
    int suma=0;
    for(int i=0;i<10;i++){
        suma=suma+tablica[i];
    }
    return (float)suma/10;
}

void wieksze_od_srednia(int tablica[],float srednia){
    printf("Elementy wieksze od sredniej: ");
    for(int i=0;i<10;i++){
        if (tablica[i]>srednia){
            printf("%d ",tablica[i]);
        }
    }
}

void min_max(int tablica[]){
    int min=tablica[0];
    int max=tablica[0];
    for(int i=0;i<10;i++){
        if (min>tablica[i]){
            min=tablica[i];
        }
        if (max<tablica[i]){
            max=tablica[i];
        }
    }
    printf("\nNajmniejsza: %d, najwieksza: %d\n",min,max);
}

void suma_nieparzysta(int tablica[]){
    int suma=0;
    for(int i=0;i<10;i++){
        if (tablica[i]%2!=0){
            suma=suma+tablica[i];
        }
    }
    printf("Suma elementow nieparzystych: %d\n",suma);
}

void tablica_od_konca(int tablica[]){
    printf("Tablica od konca: ");
    for(int i=9;i>=0;i--){
        printf("%d ",tablica[i]);
    }
}

int main(){
    int tablica[10];
    for(int i=0;i<10;i++){
        printf("Podaj %d wartosc: ",i+1);
        scanf("%d",&tablica[i]);
    }
    float srednia=Srednia(tablica);
    printf("\nSrednia: %f\n",srednia);
    wieksze_od_srednia(tablica,srednia);
    min_max(tablica);
    suma_nieparzysta(tablica);
    tablica_od_konca(tablica);

    return 0;
}