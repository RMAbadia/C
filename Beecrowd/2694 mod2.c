#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    
    int frases, soma = 0;
    char caracteres[15], temp[4];
    scanf("%d", &frases);

    while(frases != 0){
        scanf("%s", caracteres);
        
        sprintf(temp ,"%c%c ", caracteres[2], caracteres[3]);
        soma += atoi(temp);

        sprintf(temp ,"%c%c%c ", caracteres[5], caracteres[6], caracteres[7]);
        soma += atoi(temp);

        sprintf(temp ,"%c%c", caracteres[11], caracteres[12]);
        soma += atoi(temp);
        
        printf("%d\n", soma);
        frases--;
        soma = 0;
    }
    
    return 0;
} 