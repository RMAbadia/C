#include <stdio.h>
#include <string.h>

int main(){
    
    int escritas;
    char valor[5], dois[] = "two", um[] = "one";

    scanf("%d", &escritas);

    for(int i = 0; i < escritas; i++){

        scanf("%s", valor);
        int letras = strlen(valor), cont1 = 0, cont2 = 0;     

        if(letras == 5){
            printf("3\n");
        }

        else{

            for(int x = 0; x < letras; x++){
                valor[x] == um[x] ? cont1 += 1 : 0;
                valor[x] == dois[x] ? cont2 += 1 : 0;
            }

            cont1 > cont2? printf("1\n") : printf("2\n");
        }


    }
    
    return 0;
}  