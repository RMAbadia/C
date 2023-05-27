#include <stdio.h>

int main(){
    
    int valorx, valory, x, soma = 0;

    scanf("%d %d", &valorx, &valory);

    if (valorx < valory){
        for (x = valorx; x <= valory; x += 1){

            x % 13 != 0? soma += x : 0;
            
        }
    }
    else{
        for (x = valory; x <= valorx; x += 1){

            x % 13 != 0? soma += x : 0;
            
        }
    }   

    printf("%d\n", soma);

    return 0;
}