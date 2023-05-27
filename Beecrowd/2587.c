#include <stdio.h>
#include <string.h>

int main(){
    
    char palavra1[16], palavra2[16], incompleta[16], caractere1, caractere2;
    int rodadas, icognita = 0;
    scanf("%d", &rodadas);

    while(rodadas != 0){
        int iguais = 0;

        scanf("%s", palavra1);
        scanf("%s", palavra2);
        scanf("%s", incompleta);

        for(int i = 0; i < strlen(palavra1); i++){
            
            if(incompleta[i] == '_'){
                palavra1[i] == palavra2[i] ? iguais++ : 0;
                if(icognita != 0){
                    caractere1 != palavra1[i] && caractere1 != palavra2[i] && caractere2 != palavra1[i] && caractere2 != palavra2[i] ? iguais++ : 0;
                }
                caractere1 = palavra1[i];
                caractere2 = palavra2[i];
                icognita++;
            }
            
        }

        iguais != 0 ? printf("N\n") : printf("Y\n");

        rodadas--;
        icognita = 0;
    }

    return 0; 
}