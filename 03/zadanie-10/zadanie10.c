#include<stdio.h>

void merge(int tablica[], int left, int srodek,int right){
    int tab_temp[10];
    int i=left;
    int j=srodek+1;
    int k=left;
    while (i<=srodek&&j<=right)
    {
        if (tablica[i]<=tablica[j]){
            tab_temp[k]=tablica[i];
            i++;
            k++;
        }
        else{
            tab_temp[k]=tablica[j];
            j++;
            k++;
        }
    }
    while(i<=srodek){
        tab_temp[k]=tablica[i];
        i++;
        k++;
        }
    while(j<=right){
        tab_temp[k]=tablica[j];
        j++;
        k++;
    }
    for(int l=left;l<=right;l++){
        tablica[l]=tab_temp[l];
    }
    

}

void merge_sort(int tablica[],int left, int right){
    int srodek;
    if (left<right){
        srodek=(left+right)/2;
        merge_sort(tablica,left,srodek);
        merge_sort(tablica,srodek+1,right);
        merge(tablica,left,srodek,right);
    }
    
}

int main(){
    int tablica[10];
    for(int i=0;i<10;i++){
        printf("Podaj %d wartosc: ",i+1);
        scanf("%d",&tablica[i]);
    }
    merge_sort(tablica,0,9);

    printf("\nTablica: ");
    for(int i=0;i<10;i++){
        printf("%d ",tablica[i]);
    }
    return 0;
}