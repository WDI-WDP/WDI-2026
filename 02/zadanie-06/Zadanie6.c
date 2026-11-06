#include<stdio.h>
int main(){
    int n_msc;
    printf("Podaj numer miesiaca: ");
    scanf("%d",&n_msc);
    switch(n_msc){
        case 1:
        case 2:
        case 3:
            printf("I kwartal\n");
        break;

        case 4:
        case 5:
        case 6:
            printf("II kwartal\n");
        break;

        case 7:
        case 8:
        case 9:
            printf("III kwartal\n");
        break;

        case 10:
        case 11:
        case 12:
            printf("IV kwartal\n");
        break;

        default:
        printf("Podano zly numer miesiaca\n");
    }
    return 0;
}