#include<stdio.h>

int main(){
    unsigned suma=0;
    const unsigned granica=20u;
    for(unsigned i=1;i<=granica;i++){
        if (i%3==0)
            suma=suma+i;
    }
    printf("Suma: %u",suma);
    return 0;
}