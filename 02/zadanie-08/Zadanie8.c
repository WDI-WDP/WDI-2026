#include<stdio.h>

float max(float a,float b){
    if(a>b)
        return a;
    else
        return b;
}

float min(float a,float b){
    if(a<b)
        return a;
    else
        return b;
}


int main(){
    float a,b;
    printf("Podaj pierwsza liczbe: ");
    scanf("%f",&a);
    printf("Podaj druga liczbe: ");
    scanf("%f",&b);
    if(a!=b){
        printf("Wieksza: %f\n",max(a,b)); 
        printf("Mniejsza: %f\n",min(a,b));
    }
    else
        printf("Te liczby sa takie same\n");
    return 0;
}