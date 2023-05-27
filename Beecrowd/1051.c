#include <stdio.h>
   
int main() {

    float salario, imposto;
    scanf("%f", &salario);
    
    if (salario < 2000){
        printf("Isento\n");
    }
    else if (2000 < salario & salario <= 3000){
        salario -= 2000;
        imposto = salario * 0.08;
        printf("R$ %.2f\n", imposto);
    }
    else if (3000 < salario & salario <= 4500){
        salario -= 3000;
        imposto = (1000 * 0.08) + (salario * 0.18);
        printf("R$ %.2f\n", imposto);
    }
    else{
        salario -= 4500;
        imposto = (1000 * 0.08) + (1500 * 0.18) + (salario * 0.28);
        printf("R$ %.2f\n", imposto);
    }
    return 0;
}

