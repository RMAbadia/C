#include <stdio.h>

int main(){
    
    int testes, energia;
    scanf("%d", &testes);

    while(testes != 0){
        scanf("%d", &energia);
        
        energia <= 8000 ? printf("Inseto!\n") : printf("Mais de 8000!\n");

        testes--;
    }

    return 0; 
}