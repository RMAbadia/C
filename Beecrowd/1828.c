#include <stdio.h>
#include <string.h>

int main(){
    
    int rodadas;
    char primeiraescolha[8], segundaescolha[8];

    scanf("%d", &rodadas);

    for(int i = 1; i <= rodadas; i++){
        scanf("%s %s", primeiraescolha, segundaescolha);
        printf("Caso #%d: ", i);

        if(strcmp(primeiraescolha, segundaescolha) == 0){
            printf("De novo!\n");
        }

        else if(strcmp("papel", primeiraescolha) == 0 && strcmp("pedra", segundaescolha) == 0){
            printf("Bazinga!\n");
        }
        else if(strcmp("tesoura", primeiraescolha) == 0 && strcmp("papel", segundaescolha) == 0){
            printf("Bazinga!\n");
        }
        else if(strcmp("pedra", primeiraescolha) == 0 && strcmp("lagarto", segundaescolha) == 0){
            printf("Bazinga!\n");
        }
        else if(strcmp("lagarto", primeiraescolha) == 0 && strcmp("Spock", segundaescolha) == 0){
            printf("Bazinga!\n");
        }
        else if(strcmp("Spock", primeiraescolha) == 0 && strcmp("tesoura", segundaescolha) == 0){
            printf("Bazinga!\n");
        }
        else if(strcmp("tesoura", primeiraescolha) == 0 && strcmp("lagarto", segundaescolha) == 0){
            printf("Bazinga!\n");
        }
        else if(strcmp("lagarto", primeiraescolha) == 0 && strcmp("papel", segundaescolha) == 0){
            printf("Bazinga!\n");
        }
        else if(strcmp("papel", primeiraescolha) == 0 && strcmp("Spock", segundaescolha) == 0){
            printf("Bazinga!\n");
        }
        else if(strcmp("Spock", primeiraescolha) == 0 && strcmp("pedra", segundaescolha) == 0){
            printf("Bazinga!\n");
        }
        else if(strcmp("pedra", primeiraescolha) == 0 && strcmp("tesoura", segundaescolha) == 0){
            printf("Bazinga!\n");
        }
        else{
            printf("Raj trapaceou!\n");
        }
        

    }

    return 0;
}