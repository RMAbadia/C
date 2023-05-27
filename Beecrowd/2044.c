#include <stdio.h>

int main(){
    int museus;

    while(scanf("%d", &museus) != -1){
        int soma = 0, ingresso, visitas = 0;
        for(int i = 0; i < museus; i++){
            scanf("%d", &ingresso);
            soma += ingresso;
            if(soma >= 100 && soma % 100 == 0){
                visitas++;
                soma = 0;
            } 
        }
        museus != -1 ? printf("%d\n", visitas) : 0;
    }

    return 0;
}