#include <stdio.h>

int main(){

    int matriz[4], x, soma = 0;
    for(x = 0; x < 4; x++){
        scanf("%d", &matriz[x]);
        soma += matriz[x];
    }

    printf("%d\n", soma - 3);

    return 0;
}