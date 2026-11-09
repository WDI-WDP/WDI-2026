#include<stdio.h>
#include<math.h>

int main(){
    float a,b,wynik;
    char znak;
    printf("Podaj dwie liczby do dzialania po enterze: \n");
    scanf("%d",&a);
    scanf("%d",&b);   
    printf("Podaj jakie dzialanie chcesz wykonac: [+,-,*,/,%%]\n");
    scanf(" %c",&znak);
    if(znak=='+')  
        printf("Wynik: %f\n",a+b);
    else if(znak=='-')
        printf("Wynik: %f\n",a-b);
    else if(znak=='*') 
        printf("Wynik: %f\n",a*b);
    else if(znak=='/') 
    {
        if(b==0)
            printf("Nie mozna dzielic przez 0!\n");
        else
            printf("Wynik: %f\n",a/b);
    }
    else if(znak=='%') 
    {
        if(b==0)
            printf("Nie mozna dzielic przez 0!\n");
        else      
            printf("Wynik: %f\n",  fmod(a,b));
    }
    else
        printf("Wybierz znak z puli znakow\n");

    return 0;
}