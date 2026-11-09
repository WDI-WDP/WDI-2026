#include<stdio.h>

void tablica_od_poczatku_for(int tablica[],int rozmiar){
    for(int i=0;i<rozmiar;i++){
        printf("%d ",tablica[i]);
    }
}

void tablica_od_konca_for(int tablica[],int rozmiar){
    for(int i=rozmiar-1;i>=0;i--){
        printf("%d ",tablica[i]);
    }
}

void tablica_od_poczatku_while(int tablica[],int rozmiar){
    int i=0;
    while(i<rozmiar){
        printf("%d ",tablica[i]);
        i++;
    }
}

void tablica_od_konca_while(int tablica[],int rozmiar){
    int i=rozmiar-1;
    while(i>=0){
        printf("%d ",tablica[i]);
        i--;
    }
}    

void tablica_od_poczatku_do_while(int tablica[],int rozmiar){
    int i=0;
    do
    {
        printf("%d ",tablica[i]);
        i++;
    } while (i<rozmiar);
    
}

void tablica_od_konca_do_while(int tablica[],int rozmiar){
    int i=rozmiar-1;
    do
    {
        printf("%d ",tablica[i]);
        i--;
    } while (i>=0);
    
}


int main(){
    int tablica[]={1,4,7,10,13};
    int rozmiar=5;
    printf("Petla for:\n");
    printf("Od poczatku: ");
    tablica_od_poczatku_for(tablica,rozmiar);
    printf("\nOd konca: ");
    tablica_od_konca_for(tablica,rozmiar);

    printf("\nPetla while:\n");
    printf("Od poczatku: ");
    tablica_od_poczatku_while(tablica,rozmiar);
    printf("\nOd konca: ");
    tablica_od_konca_while(tablica,rozmiar);

    printf("\nPetla do... while:\n");
    printf("Od poczatku: ");
    tablica_od_poczatku_do_while(tablica,rozmiar);
    printf("\nOd konca: ");
    tablica_od_konca_do_while(tablica,rozmiar);
    return 0;
}