#include <stdio.h>
#include <stdlib.h>

_Bool primo(int n){
    if (n < 2)
        return 0;

    if (n == 2)
        return 1;

    if (n % 2 == 0)
        return 0;

    for (int d = 3; d * d <= n; d += 2){
        if (n % d == 0){
            return 0;
        }
    }
    
    return 1;
}

int main(){

    int valor, resultado = 0, achou = 1, resultad[2];
    scanf("%d", &valor);


    for(int i = valor; resultado < 2; i -= achou){
        if(primo(i) == 1){
            resultad[resultado++] = i;
            achou = 2;

            if((resultad[0] - i) != 2 && resultado == 2){
                resultad[0] = i;
                resultado = 1;
            }
                
        }
        
    }

    resultad[0] > resultad[1] ? printf("%d %d\n", resultad[1], resultad[0]) : printf("%d %d\n", resultad[0], resultad[1]);

    return 0;
}