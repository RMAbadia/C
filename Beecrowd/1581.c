#include <stdio.h>
#include <string.h>

int main(){
    
    int grupos;
    char linguagem1[21], linguagem2[21];

    scanf("%d", &grupos);

    for(int x = 0; x < grupos; x++){
        int pessoas, rodada = 0, diff, resultado = 0;
        scanf("%d", &pessoas);

        do{
            
            scanf("%s", linguagem1);
            
            if(rodada != 0){
                diff = strcmp(linguagem1, linguagem2);
                diff != 0 ? resultado++ : 0;
            }

            strcpy(linguagem2, linguagem1);
    
            rodada++;
            pessoas--;

        }while (pessoas != 0);
        
        resultado == 0? printf("%s\n", linguagem1) : printf("ingles\n");
    }
    
    return 0;
}