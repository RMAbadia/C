#include <stdio.h>

int main(){
    
    int valores, in = 0, out = 0, valor, x;

    scanf("%d", &valores);

    for (x = valores; x > 0; x -= 1){

        scanf("%d", &valor);

        if (valor >= 10 && valor <= 20){
            in ++;
        }
        else{
            out ++;
        }
    }

    printf("%d in\n%d out\n", in, out);

    return 0;
}