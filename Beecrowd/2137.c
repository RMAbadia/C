#include <stdio.h>
#include <string.h>

void ordena(int tamanho, int lista[]){
    for(int i = 0; i < tamanho; i++){
        int pos = i;

        for(int k = pos + 1; k < tamanho; k++){
            if(lista[k] < lista[pos]){
                pos = k;
            }
        }
        int variavel = lista[i];
        lista[i] = lista[pos];
        lista[pos] = variavel;
    }
}

int main(){
    
    int livros;
    
    while(scanf("%d", &livros) != EOF){
        int codigos[livros];

        for(int i = 0; i < livros; i++){
            scanf("%d", &codigos[i]);
        }

        ordena(livros, codigos);
        
        for(int x = 0; x < livros; x++){
            printf("%04d\n", codigos[x]);
        } 
    }
    
    return 0;
}