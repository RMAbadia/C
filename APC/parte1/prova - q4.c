#include <stdio.h>

int main(){

    int horas, resto = 0;
    scanf("%d", &horas);

    printf("%d horas de tratamento:\n", horas);

    horas % 3 == 0 ? printf("Troca do soro\n") : (resto += 1);
    horas % 5 == 0 ? printf("Injecao de antibioticos\n") : (resto += 1);
    horas % 12 == 0 ? printf("Reavaliacao\n") : (resto += 1);

    resto == 3 ?  printf("Monitoramento dos sinais vitais\n") : 0;

    
    return 0;
}