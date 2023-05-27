#include <stdio.h>

int main(){
    
    int carros, voltas, tempo; 
    int res1, res2, res3;

    scanf("%d %d", &carros, &voltas);

    long long primeiro = 1000000*voltas, segundo = 1000000*voltas, terceiro = 1000000*voltas, soma = 0;
    int matriz[carros];

    for(int i = 0; i < carros; i++){
        for(int x = 0; x < voltas; x++){
            scanf("%d", &tempo);
            soma += tempo;
        }

        if(primeiro > soma){
            terceiro = segundo;
            segundo = primeiro;
            primeiro = soma;
        }
        else if(segundo > soma && soma != primeiro){
            terceiro = segundo;
            segundo = soma;
        }
        else if(terceiro > soma && soma != primeiro && soma != segundo){
            terceiro = soma;
        }

        matriz[i] = soma;
        soma = 0;
    }

    for(int j = 0; j < carros; j++){
        matriz[j] == primeiro ? res1 = j+1 : 0;
        matriz[j] == segundo ? res2 = j+1 : 0;
        matriz[j] == terceiro ? res3 = j+1 : 0;
    }
    
    printf("%d\n%d\n%d\n", res1, res2, res3);

    return 0; 
}