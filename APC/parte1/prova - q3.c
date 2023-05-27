#include <stdio.h>

int main(){

    int horas;
    scanf("%d", &horas);


    if (horas % 3 == 0){
        printf ("%d horas de tratamento:\nTroca do soro", horas);
    }
    else if(horas % 5 == 0){
        printf ("%d horas de tratamento:\nTroca do soro\nInjecao de antibioticos\nReavaliacao", horas);
    }
    else{
        printf ("%d horas de tratamento:\nMonitoramento dos sinais vitais", horas);
    }

    return 0;
}
