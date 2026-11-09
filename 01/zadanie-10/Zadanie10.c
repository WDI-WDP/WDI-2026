#include<stdio.h>

int main(){
    float a,b,c,d,e,srednia,ndst;
    ndst=0;
    printf("Podaj piec ocen po enterze: \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%f",&e);
    srednia=(a+b+c+d+e)/5;
    if (a==1)
        ndst=ndst+1;
    if (b==1)
        ndst=ndst+1;
    if (c==1)
        ndst=ndst+1;
    if (d==1)
        ndst=ndst+1;
    if (e==1)
        ndst=ndst+1;    
    printf("Srednia: %f\n",srednia);
    if(ndst==1)
        printf("Byla %.0f ocena niedostateczna\n",ndst);
    if(ndst==2||3||4)
        printf("Byly %.0f oceny niedostateczne\n",ndst);
    if(ndst==5)
        printf("Bylo %.0f ocen niedostatecznych\n",ndst);
    return 0;
}