#include <stdio.h>

int main(){
    
    int vilao;
    scanf("%d", &vilao);
    char nome[27];

    for(int i = 0; i < vilao; i++){
        scanf("%s", nome);
        printf("Y\n");
    }
    
    return 0; 
}