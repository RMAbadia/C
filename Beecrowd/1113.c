#include <stdio.h>

int main(){
    
    int valorx, valory, x;

    for (x = 1; x > 0; x += 1){

        scanf("%d %d", &valorx, &valory);

        if (valorx < valory){
            printf("Crescente\n");
        }
        else if(valorx > valory){
            printf("Decrescente\n");
        }
        else{
            break;
        }
    }

    return 0;
}