#include <stdio.h>
#include <string.h>

int main(){
    
    int rodadas;
    scanf("%d", &rodadas);

    while(rodadas != 0){

        char primeiro[101], segundo[101], primeiraescolha[6], segundaescolha[6];
        char par[4] = "PAR", impar[6] = "IMPAR";
        int numero1, numero2;

        scanf("%s %s %s %s", primeiro, primeiraescolha, segundo, segundaescolha);
        scanf("%d %d", &numero1, &numero2);

        int result = (numero1 + numero2);
        result %= 2;

        if(result == 0 && strcmp(primeiraescolha, par) == 0){
            printf("%s\n", primeiro);
        }
        else if(result == 0 && strcmp(segundaescolha, par) == 0){
            printf("%s\n", segundo);
        }
        else if(result == 1 && strcmp(primeiraescolha, impar) == 0){
            printf("%s\n", primeiro);
        }
        else{
            printf("%s\n", segundo);
        }

        rodadas--;
    }
    
    return 0;
}