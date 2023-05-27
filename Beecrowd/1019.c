#include<stdio.h>
#include<math.h>

int main (){
    
    int segundos, minutos, horas, resto, restomin;
    scanf("%d", &segundos);
    if (segundos < 60){
        printf("0:0:%d\n", segundos);
    }
    if (segundos < 3600 & segundos > 60){
        minutos = segundos/60;
        resto = segundos - (minutos * 60);
        printf("0:%d:%d\n", minutos, resto); 
    }
    if (segundos > 3600){
        horas = segundos/3600;
        restomin = segundos - (horas * 3600);
        minutos = restomin/60;
        resto = segundos - (minutos * 60 + (horas * 3600));
        printf("%d:%d:%d\n", horas, minutos, resto);
    }
    return 0;
}

