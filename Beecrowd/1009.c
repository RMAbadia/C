#include <stdio.h>

int main()
{
    double salario, vendas;
    char nome[15];

    scanf("%s %lf %lf", &nome, &salario, &vendas);
    printf("TOTAL = R$ %.2f\n", (vendas*0.15)+salario);

    return 0;
}
