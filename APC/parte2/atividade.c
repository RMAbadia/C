#include <stdio.h>
#include <string.h>

int main(){

    int vezes, res = 0;
    char numeric[] = "0123456789";
    char identifica[33];
    scanf("%d", &vezes);

    while (vezes--)
    {
        scanf("%s", identifica);

        for(int j = 0; j < strlen(numeric); j++){
            if(identifica[0] == numeric[j]){
                res++;
            }
        }

        strcmp(identifica, "auto") == 0 ? res++ : 0;
        strcmp(identifica, "break") == 0 ? res++ : 0;
        strcmp(identifica, "continue") == 0 ? res++ : 0;
        strcmp(identifica, "case") == 0 ? res++ : 0;
        strcmp(identifica, "do") == 0 ? res++ : 0;
        strcmp(identifica, "else") == 0 ? res++ : 0;
        strcmp(identifica, "for") == 0 ? res++ : 0;
        strcmp(identifica, "goto") == 0 ? res++ : 0;
        strcmp(identifica, "if") == 0 ? res++ : 0;
        strcmp(identifica, "int") == 0 ? res++ : 0;
        strcmp(identifica, "double") == 0 ? res++ : 0;
        strcmp(identifica, "float") == 0 ? res++ : 0;
        strcmp(identifica, "char") == 0 ? res++ : 0;
        strcmp(identifica, "switch") == 0 ? res++ : 0;
        strcmp(identifica, "auto") == 0 ? res++ : 0;
        strcmp(identifica, "default") == 0 ? res++ : 0;
        strcmp(identifica, "while") == 0 ? res++ : 0;
        strcmp(identifica, "volatile") == 0 ? res++ : 0;
        strcmp(identifica, "const") == 0 ? res++ : 0;
        strcmp(identifica, "short") == 0 ? res++ : 0;
        strcmp(identifica, "long") == 0 ? res++ : 0;
        strcmp(identifica, "static") == 0 ? res++ : 0;
        strcmp(identifica, "extern") == 0 ? res++ : 0;
        strcmp(identifica, "signed") == 0 ? res++ : 0;
        strcmp(identifica, "unsigned") == 0 ? res++ : 0;
        strcmp(identifica, "sizeof") == 0 ? res++ : 0;
        strcmp(identifica, "typedef") == 0 ? res++ : 0;
        strcmp(identifica, "struct") == 0 ? res++ : 0;
        strcmp(identifica, "return") == 0 ? res++ : 0;
        strcmp(identifica, "enum") == 0 ? res++ : 0;
        strcmp(identifica, "register") == 0 ? res++ : 0;
        strcmp(identifica, "void") == 0 ? res++ : 0;

        res == 0 ? printf("Sim\n") : printf("Nao\n");
        res = 0;
    }
    
    
    return 0;
}