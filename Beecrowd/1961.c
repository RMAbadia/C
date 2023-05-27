#include <stdio.h>

int main(){

    int altura, repeticao, valor, pos1, pos2, dif, pulos, morte = 0;
    scanf("%d %d", &altura, &repeticao);
    pulos = repeticao;

    do{
        scanf("%d", &valor);

        pos1 = valor;
        dif = pos1 - pos2;
        pos2 = pos1;

        if(dif < 0){
            dif = dif * (-1);
        }

        if(pulos != repeticao){
            if(dif > altura){
                morte++;
            }
        }

        repeticao--;

    } while(repeticao != 0);

    morte != 0? printf("GAME OVER\n") : printf("YOU WIN\n");

return 0;
}













/*
    for(int x = 0; x < repeticao; x++){
        scanf("%d", &valor);

        pos1 = valor;
        dif = pos1 - pos2;
        pos2 = pos1;

        if(dif < 0){
            dif = dif * (-1);
        }

        
        if(dif > altura){
            printf("GAME OVER\n");
            return 1;
        }
    }
    printf("YOU WIN\n");
*/  
 
