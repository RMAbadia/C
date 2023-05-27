#include<stdio.h>
#include<math.h>

int main (){
    
    float horas, vmed, percorrido, autonomia;
    scanf("%f %f", &horas, &vmed);
    autonomia = (horas * vmed)/12;
    printf("%.3f\n", autonomia);

    return 0;
}

