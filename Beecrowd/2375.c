#include <stdio.h>
   
int main() {

    int boliche, altura, largura, profundidade;
    scanf("%d %d %d %d", &boliche, &altura, &largura, &profundidade);
    if (boliche > altura || boliche > largura || boliche > profundidade){
        printf("N\n");
    }
    else{
        printf("S\n");
    }

    return 0;
}

