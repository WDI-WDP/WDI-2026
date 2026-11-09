#include<stdio.h>
int main(){
    int sec,min,h,r,rsec;
    printf("Podaj nieujemna liczbe sekund: ");
    scanf("%d",&sec);
    h=sec/3600;
    r=sec%3600;
    min=r/60;
    rsec=r%60;
    printf("%d daje: %d h %d min %d s",sec,h,min,rsec);
    return 0;
}