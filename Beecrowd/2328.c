#include <stdio.h>

int main(){
    
    int divisoes, armazenados = 0, pedacos;
    scanf("%d", &divisoes);

    for(int i = 0; i < divisoes; i++){
        scanf("%d", &pedacos);
        armazenados += pedacos-1;
    }

    printf("%d\n", armazenados);

    return 0; 
}