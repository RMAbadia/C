#include <stdio.h>

int centena(int cent){
    if(cent == 900){
        printf("CM");
    }
    else if(cent == 400){
        printf("CD");
    }
    else{
        for(int x = 0; cent > 499; cent -= 500){
            printf("D");
        }

        for(int x = 0; cent > 99; cent -= 100){
            printf("C");
        }
    }
}

int dezena(int dez){
    if(dez == 90){
        printf("XC");
    }
    else if(dez == 40){
        printf("XL");
    }
    else{
        for(int x = 0; dez > 49; dez -= 50){
            printf("L");
        }

        for(int x = 0; dez > 9; dez -= 10){
            printf("X");
        }
    }
}

int unidade(int uni){
    if(uni == 9){
        printf("IX");
    }
    else if(uni == 4){
        printf("IV");
    }
    else{
        for(int x = 0; uni > 4; uni -= 5){
            printf("V");
        }

        for(int x = 0; uni > 0; uni -= 1){
            printf("I");
        }
    }
}

int main(){

    int valor, uni, dez, cent;
    scanf("%d", &valor);

    cent = valor - (valor%100);
    dez = valor%100 - valor%10;
    uni = valor%100 - dez;

    centena(cent);
    dezena(dez);
    unidade(uni);
    printf("\n");

    return 0;
}