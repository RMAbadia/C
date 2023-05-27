#include <stdio.h>

int main(){

    double minutos, torpedos, mb;
    scanf("%lf %lf %lf", &minutos, &torpedos, &mb);

    int alfa = 5000, beta = 7500, delta = 10000;

    minutos > 3000 ? (alfa += ((minutos - 3000)*80)) : (alfa += 0);
    torpedos > 1000 ? (alfa += ((torpedos - 1000)*50)) : (alfa += 0);
    mb > 10000 ? (alfa += ((mb - 10000)*25)) : (alfa +=0);

    minutos > 4500 ? (beta += ((minutos - 4500)*90)) : (beta += 0);
    torpedos > 2000 ? (beta += ((torpedos - 2000)*60)) : (beta += 0);
    mb > 15000 ? (beta += ((mb - 15000)*20)) : (beta +=0);

    minutos > 6000 ? (delta += (minutos - 6000)) : (delta += 0);
    torpedos > 3500 ? (delta += ((torpedos - 3500)*75)) : (delta += 0);
    mb > 25000 ? (delta += ((mb - 25000)*30)) : (delta +=0);
    

    if (delta < alfa && delta < beta){
        printf("Plano Delta: R$ %d,%.02d", delta/100, delta % 100);
    }
    else if (beta < alfa && beta < delta){
        printf("Plano Beta: R$ %d,%.02d", beta/100, beta % 100);
    }
    else{
        printf("Plano Alfa: R$ R$ %d,%.02d", alfa/100, alfa % 100);
    }

    return 0;
}