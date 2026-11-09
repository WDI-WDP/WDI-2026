#include<stdio.h>

int main(){
    float liczba;
    printf("Podaj dowolna liczbe zmiennoprzecinkowa: ");
    scanf("%f", &liczba);
    printf("Liczba z jednym miejscem po przecinku: %.1f\n",liczba);
    printf("Liczba z trzema miejscami po przecinku: %.3f\n",liczba);
    printf("Liczba z piecioma miejscami po przecinku: %.5f\n",liczba);

    return 0; 
}