#include <stdio.h>
   
int main() {

    int dia, dia1, hora, hora1, minuto, minutos1, segundo, segundos1;
    int segundostotal, dias, horas, minutos;

    scanf("Dia %d %d : %d : %d Dia %d %d : %d : %d", &dia, &hora, &minuto, &segundo, &dia1, &hora1, &minutos1, &segundos1);
    segundostotal = ((dia1 * 86400) + (hora1 * 3600) + (minutos1 * 60) + segundos1) - ((dia * 86400) + (hora * 3600) + (minuto * 60) + segundo);

    dias = segundostotal / 86400;
    segundostotal %= 86400;
    horas = segundostotal / 3600;
    segundostotal %= 3600;
    minutos = segundostotal / 60;
    segundostotal %= 60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dias, horas,  minutos, segundostotal);


    return 0;
}

