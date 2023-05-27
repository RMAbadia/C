#include <stdio.h>

int main(){
    
    int linhas, colunas, terras = 0, ncosta = 0;
    scanf("%d %d", &linhas, &colunas);
    linhas, colunas;
    char matriz[linhas][colunas], caractere;

    for(int i = 0; i < colunas; i++){
        scanf("\n");
        for(int j = 0; j < linhas; j++){
            scanf("%c", &caractere);
            matriz[i][j] = caractere;
            caractere == '#' ? terras++ : 0;
        }
    }

    for(int x = 0; x < colunas; x++){
        for(int y = 0; y < linhas; y++){
            if(x != 0 && y != 0 && x < (colunas-1) && y < (linhas-1)){
                if(matriz[x][y] == '#' && matriz[x-1][y] == '#' && matriz[x+1][y] == '#' && matriz[x][y-1] == '#' && matriz[x][y+1] == '#'){
                    ncosta++;
                }
            }
        }
    }
    printf("%d\n", terras - ncosta);

    return 0; 
}