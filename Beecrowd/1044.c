#include <stdio.h>
   
int main() {

    int A, B, resto;
    scanf("%d %d", &A, &B);
    if (A > B){
        resto = A % B;
        if (resto == 0){
            printf("Sao Multiplos\n");
        }
        else{
            printf("Nao sao Multiplos\n");
        }
    }
    else{
        resto = B % A;
        if (resto == 0){
            printf("Sao Multiplos\n");
        }
        else{
            printf("Nao sao Multiplos\n");
        }
    }

    return 0;
}

