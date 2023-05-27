#include <stdio.h>

int main(){

    double minutos, torpedos, mb;
    scanf("%lf %lf %lf", &minutos, &torpedos, &mb);

    double alfa = 50, beta = 75, delta = 100;

    minutos > 30 ? (alfa += ((minutos - 30)*0.8)) : (alfa += 0);
    torpedos > 10 ? (alfa += ((torpedos - 10)*0.5)) : (alfa += 0);
    mb > 100 ? (alfa += ((mb - 100)*0.25)) : (alfa +=0);

    minutos > 45 ? (beta += ((minutos - 45)*0.9)) : (beta += 0);
    torpedos > 20 ? (beta += ((torpedos - 20)*0.6)) : (beta += 0);
    mb > 150 ? (beta += ((mb - 150)*0.2)) : (beta +=0);

    minutos > 60 ? (delta += (minutos - 60)) : (delta += 0);
    torpedos > 35 ? (delta += ((torpedos - 35)*0.75)) : (delta += 0);
    mb > 250 ? (delta += ((mb - 250)*0.3)) : (delta +=0);
    
    if (delta < alfa && delta < beta){
        printf("Plano Delta: R$ %.2lf", delta);
    }
    else if (beta < alfa && beta < delta){
        printf("Plano Beta: R$ %.2lf", beta);
    }
    else{
        printf("Plano Alfa: R$ %.2lf", alfa);
    }

    return 0;
}