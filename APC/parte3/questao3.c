#include <stdio.h>

int main(){

    int gabarito[6], senas = 0, quinas = 0, quadras = 0;
    for(int j = 0; j < 6; j++){
        scanf("%d", &gabarito[j]);
    }

    int apostas, dezenas_por_jogador, acertos = 0, aposta;
    scanf("%d", &apostas);

    while(apostas--){
        scanf("%d", &dezenas_por_jogador);
        for(int k = 0; k < dezenas_por_jogador; k++){
            scanf("%d", &aposta);
            for(int j = 0; j < 6; j++){
                aposta == gabarito[j] ? acertos++ : 0;
            }
        }
        acertos == 4 ? quadras++ : 0;
        acertos == 5 ? quinas++ : 0;
        acertos == 6 ? senas++ : 0;
        acertos = 0;
        
    }
    
    printf("%d %d %d\n", senas, quinas, quadras);

    return 0;
}