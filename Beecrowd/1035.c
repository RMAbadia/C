#include <stdio.h>
 
int main() {
 
    int primeiro, segundo, terceiro, quarto;
    scanf("%i %i %i %i", &primeiro, &segundo, &terceiro, &quarto);

    if(segundo > terceiro && quarto > primeiro && (terceiro+quarto) > (primeiro+segundo) && terceiro >= 0 && quarto >= 0 && primeiro % 2 == 0){
        printf("Valores aceitos\n");
    } 
    else{
        printf("Valores nao aceitos\n");
    }

    return 0;
}