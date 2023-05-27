#include <stdio.h>
#include <string.h>

int main(){
    
    char letra, palavra[1001], ultima[1001];
    float quantidade = 0, possui = 0, palavrascom = 0;;
    scanf("%c\n", &letra);

    while(scanf("%s", palavra) != EOF){
        
        for(int i = 0; i < strlen(palavra); i++){
            palavra[i] == letra ? possui = 1 : 0;
        }
        
        possui == 1 ? palavrascom++ : 0;
        quantidade++;
        possui = 0;
    }

    printf("%.1f\n", (palavrascom/quantidade)*100);
    
    return 0; 
}
