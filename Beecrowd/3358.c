#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    int sobrenomes;
    char sobrenome[43];
    scanf("%d", &sobrenomes);

    while(sobrenomes--){
        scanf("%s", sobrenome);
        int consoante = 0, dificil = 0;
        char vogal[] = "aeiou";

        for(int i = 0; i < strlen(sobrenome); i++){
            for(int j = 0; j < strlen(vogal); j++){
                if(tolower(sobrenome[i]) == tolower(vogal[j])){
                    dificil = 1;
                    break;
                }
            }

            dificil == 1 ? consoante = 0 : 0;
            dificil == 0 ? consoante++ : 0;
            dificil = 0;

            if(consoante == 3){
                break;
            }
        }
        if(consoante == 3){
            printf("%s nao eh facil\n", sobrenome);
        }
        else{
            printf("%s eh facil\n", sobrenome);
        }
    }

    return 0;
}