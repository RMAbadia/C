#include <stdio.h>

int main(){
    
    int linha, coluna, minhocas, soma = 0, maior = 0;
    scanf("%d %d", &linha, &coluna);
    int campo[linha][coluna];

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            scanf("%d", &minhocas);
            soma += minhocas;
            campo[i][j] = minhocas;
        }
        soma > maior ? maior = soma : 0;
        soma = 0;
    }

    for(int k = 0; k < coluna; k++){
        for(int x = 0; x < linha; x++){
            soma += campo[x][k];
        }
        soma > maior ? maior = soma : 0;
        soma = 0;
    }

    printf("%d\n", maior);

    return 0; 
}