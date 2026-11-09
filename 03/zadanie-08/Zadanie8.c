#include<stdio.h>
int top=-1;
int tablica[5];

void lifo_dodawanie(){
    if (top==4){
        printf("Tablica pelna!\n");
    }
    else{
        top++;
        printf("Podaj %d element tablicy: ",top+1);
        scanf("%d",&tablica[top]);
    }    
}

void fifo_dodawanie(){
    if (top==4){
        printf("Tablica pelna!\n");
    }
    else{
        top++;
        printf("Podaj %d element tablicy: ",top+1);
        scanf("%d",&tablica[top]);
    }    
}

void lifo_usuwanie(){
    if (top==-1){
        printf("Tablica pusta!\n");
    }
    else{
        printf("Usunieto %d element: %d\n",top+1,tablica[top]);
        top--;
    }    
}

void fifo_usuwanie(){
    if (top==-1){
        printf("Tablica pusta!\n");
    }
    else{
        printf("Usunieto %d\n",tablica[0]);
        for(int i=0;i<top;i++){
            tablica[i]=tablica[i+1];
        }
        top--;
    }    
}

int main(){
    int opcja;
    while(1){

        printf("\nDodaj wartosc (LIFO) [1]\n");
        printf("Odejmij wartosc (LIFO) [2]\n");
        printf("Dodaj wartosc (FIFO) [3]\n");
        printf("Odejmij wartosc (FIFO) [4]\n");
        printf("Zakoncz program [5]\n\n");
        printf("Wybierz opcje: ");
        scanf("%d",&opcja);
        switch (opcja)
        {
        case 1:
            lifo_dodawanie();
            break;
        case 2:
            lifo_usuwanie();
            break;
        case 3:
            fifo_dodawanie();
            break;
        case 4:
            fifo_usuwanie();
            break;
        case 5:
            return 0;
            break;
        
        default:
            break;
        }
    }
}