#include <stdio.h>
#include <string.h>

int main(){
    
    int repeticao, menor, maior;
    char caractere[10000];
    scanf("%d", &repeticao);

    while(repeticao != 0){
        scanf("%d %d", &menor, &maior);
        for(int i = menor; i <= maior; i++){
            printf("%d", i);
        }
        for(int i = maior; i >= menor; i--){
            sprintf(caractere,"%d", i);
            for(int i = strlen(caractere)-1; i >= 0; i--){
                printf("%c", caractere[i]);
            }              
        }

        printf("\n");
        repeticao--;
    }

    return 0; 
}
