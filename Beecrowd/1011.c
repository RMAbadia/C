#include<stdio.h>
#include<math.h>

int main (){
    
    double pi = 3.14159;
    double raio;
    scanf("%lf", &raio);
    double volume = (4*pi*pow(raio, 3))/3;
    printf("VOLUME = %.3lf\n", volume);


    return 0;
}

