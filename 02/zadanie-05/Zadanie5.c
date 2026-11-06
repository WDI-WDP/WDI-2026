#include<stdio.h>
int main(){
    char znak;
    printf("Poddany [P] - moze czcic krola\n");
    printf("Giermek [G] - moze wchodzic na dziedziniec zamkowy codziennie\n");
    printf("Rycerz [R] - moze wchodzic do zamku codziennie oraz rekrutowac giermkow\n");
    printf("Mag [M] - moze rozmawiac z krolem\n");
    printf("Krolowa [K] - moze rozkazywac krolowi\n\n");

    printf("Wybierz klase spoleczna: ");
    scanf(" %c",&znak);
    if(znak=='P'||znak=='p')
        printf("Poddany - ");
    else if(znak=='G'||znak=='g')
        printf("Giermek - ");
    else if(znak=='R'||znak=='r')
        printf("Rycerz - ");
    else if(znak=='M'||znak=='m')
        printf("Mag - ");
    else if(znak=='K'||znak=='k')
        printf("Krolowa - ");

    switch(znak){
    case 'K':
    case 'k':
        printf("moze rozkazywac krolowi, ");
    case 'M':
    case 'm':
        printf("moze rozmawiac z krolem, ");
    case 'R':
    case 'r':
        printf("moze wchodzic do zamku codziennie oraz rekrutowac giermkow, ");
    case 'G':
    case 'g':
        printf("moze wchodzic na dziedziniec zamkowy codziennie, ");
    case 'P':
    case 'p':
        printf("moze czcic krola.\n");
        break;
    default:
        printf("Wybrano zly znak\n");
        break;
    
    }
    
    
    return 0;
}