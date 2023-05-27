#include <stdio.h>
#include <string.h>

int main(){
    
    int senhas, variacao = 0, numeros = 1;
    char caracteres[16], numero[11] = {'A', 'E', 'I', 'O', 'S', 'a', 'e', 'i', 'o', 's'};

    scanf("%d", &senhas);

    for(int i = 0; i < senhas; i++){
        scanf("%s", caracteres);
        for(int x = 0; x < strlen(caracteres); x++){
            variacao = 2;
            for(int j = 0; j < strlen(numero); j++){
                if(caracteres[x] == numero[j]){
                    variacao = 3;
                }
            }
            numeros *= variacao; 
        }
        printf("%d\n", numeros);
        numeros = 1;
    }

    return 0;
}