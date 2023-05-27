#include <stdio.h>
#include <math.h>
 
int main() {
 
    float a, b, c;
    printf("\nIremos calcular o valor das raizes da sua equacao de segundo grau!\n\nPara isso preciso que voce insira:\nO valor de A: ");
    scanf("%f", &a);
    printf("\nO Valor de B: ");
    scanf("%f", &b);
    printf("\nO Valor de C: ");
    scanf("%f", &c);
    printf("\nEstamos calculando suas raizes, aguarde um minuto...");

    float calcula_delta(float a, float b, float c);

    float delta = calcula_delta(a, b, c);

    if(delta < 0){
        printf("\nA solucao possui raiizes complexas, por isso nao conseguimos calcular!\n");
    }
    else{
        delta = sqrt(delta);
        float raiz1 = (-b + delta)/(2*a);
        float raiz2 = (-b - delta)/(2*a);

        printf("\nRaiz 1: %g\nRaiz 2: %g\n", raiz1, raiz2);
    }

    return 0;
}

float calcula_delta(float a, float b, float c){
    float resultado;

    resultado = (b*b) - (4*a*c);

    return resultado;
}