#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int devolve_inteiro(char c){
    switch(c){
        case '0':
            return 0;
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
    }
}

int main(){
    
    int frases, soma = 0;
    char caracteres[15], temp[4];
    scanf("%d", &frases);

    while(frases != 0){
        scanf("%s", caracteres);
        
        soma += devolve_inteiro(caracteres[2])*10 + devolve_inteiro(caracteres[3]);
        soma += devolve_inteiro(caracteres[5])*100 + devolve_inteiro(caracteres[6])*10 + devolve_inteiro(caracteres[7]);
        soma += devolve_inteiro(caracteres[11])*10 + devolve_inteiro(caracteres[12]);
        
        printf("%d\n", soma);
        frases--;
        soma = 0;
    }
    
    return 0;
} 