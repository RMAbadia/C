#include <stdio.h>

int main(){

    int mes, dia, ano;
    scanf("%d/%d/%d", &mes, &dia, &ano);

    printf("%.2d/%.2d/%d\n", dia, mes, ano < 70 ? 2000+ano : 1900+ano);

    return 0;
}