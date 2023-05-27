#include <stdio.h>

int main(){
    
    int valores, semelhantes = 1, maior = 0;
    scanf("%d", &valores);
    int lista[valores];

    for(int i = 0; i < valores; i++){
        scanf("%d", &lista[i]);
    }

    for(int x = 0; x < valores; x++){
        for(int j = x+1; j <= valores; j++){
            if(lista[x] == lista[j]){
                semelhantes++;
            }
            else{
                semelhantes > maior ? maior = semelhantes : 0;
                semelhantes = 1;
                break;
            }
        }
    }

    printf("%d\n", maior);

    return 0; 
}