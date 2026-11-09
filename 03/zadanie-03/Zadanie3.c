#include<stdio.h>

int Ceiling(float liczba){
    int wynik;
    if(liczba==(int)liczba)
        wynik=(int)liczba;
    else{
        if(liczba>0){
            wynik=(int)liczba+1;
        }
        else if(liczba<0){
            wynik=(int)liczba;
        }
        else{
            return 0;
        }
    }
    return wynik;
}

int Floor(float liczba){
    int wynik;
    if(liczba==(int)liczba)
        wynik=(int)liczba;
    else{
        if(liczba>0){
            wynik=(int)liczba;
        }
        else if(liczba<0){
            wynik=(int)liczba-1;
        }
        else{
            return 0;
        }
    }    
    return wynik;
}

int Round(float liczba){
    int wynik;
    if(liczba>0){
        wynik=(int)(liczba+0.5);
    }
    else if(liczba<0){
        wynik=(int)(liczba-0.5);
    }
    else{
        return 0;
    }
    return wynik;
}


int main(){
    float liczba;
    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%f",&liczba);
    printf("Sufit: %d\n",Ceiling(liczba));
    printf("Podloga: %d\n",Floor(liczba));
    printf("Zaokraglenie: %d\n",Round(liczba));

    return 0;
}