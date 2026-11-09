#include<stdio.h>
int main()
{
    float a,b,c;
    float suma,roznica,iloczyn,iloraz;
    printf("Podaj pierwsza liczbe calkowita: ");
    scanf("%f",&a);
    printf("Podaj druga liczbe calkowita: ");
    scanf("%f",&b);
    printf("Podaj trzecia liczbe calkowita: ");
    scanf("%f",&c);
    suma=a+b+c;
    roznica=a-b;
    iloczyn=a*c;
    iloraz=c/b;
    printf("suma trzech: %f\n",suma);
    printf("roznica pierwszych dwoch: %f\n",roznica);
    printf("iloczyn pierwszej i trzeciej: %f\n",iloczyn);
    printf("iloraz trzeciej i drugiej: %f\n",iloraz);
    return 0;
}