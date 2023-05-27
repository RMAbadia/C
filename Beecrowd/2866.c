#include <stdio.h>
#include <string.h>

void swap(char lista[], char entrada, char saida){
    for(int i = 0; i < strlen(lista); i++){
        lista[i] == entrada ? lista[i] = saida : 0;
    }
}

int main(){
    
    int casos;
    char alfaminusculo[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    scanf("%d", &casos);

    while (casos != 0){
        char mensagem[1001];
        scanf("%s", mensagem);

        for(int i = 0; i < strlen(alfaminusculo); i++){
            swap(mensagem, alfaminusculo[i], ' ');
        }
        
        for(int j = strlen(mensagem)-1; j >= 0; j--){
            mensagem[j] != ' ' ? printf("%c", mensagem[j]) : 0;
        }
        printf("\n");

        casos--;
    }
    

    return 0; 
}