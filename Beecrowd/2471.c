#include <stdio.h>

int main(){
    
    int dim, numeros, soma = 0, primeironumero = 0, segundonumero = 0, pontosprimeiro = 0, pontossegundo = 0;
    scanf("%d", &dim);
    int matriz[dim][dim], original, alterado, alteradolinha, alteradocoluna, desvantagem, gabarito;

    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            scanf("%d", &numeros);
            matriz[i][j] = numeros;
            soma += numeros;
        }

        i == 0 ? primeironumero = soma : 0;
        soma != primeironumero ? segundonumero = soma : 0;
        
        soma == primeironumero ? pontosprimeiro++ : 0;
        soma == segundonumero ? pontossegundo++ : 0;

        soma = 0;
    }

    pontosprimeiro > pontossegundo ? desvantagem = segundonumero : (desvantagem = primeironumero);

    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            soma += matriz[j][i];
        }
        soma == desvantagem ? alteradocoluna = i : 0;
        soma = 0;
    }

    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            soma += matriz[i][j];
        }
        soma == desvantagem ? alteradolinha = i : 0;
        soma = 0;
    }  

    gabarito = matriz[alteradolinha][alteradocoluna];

    printf("%d %d\n", primeironumero != desvantagem ? (primeironumero - desvantagem) + gabarito : (segundonumero - desvantagem) + gabarito  , gabarito);
    
    return 0; 
}