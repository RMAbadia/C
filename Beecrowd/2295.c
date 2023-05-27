#include <stdio.h>

int main(){
    
    float alcool, gasolina, kmalcool, kmgasolina, valora, valorg;
    scanf("%f %f %f %f", &alcool, &gasolina, &kmalcool, &kmgasolina);

    valora = kmalcool/alcool;
    valorg = kmgasolina/gasolina;

    valorg >= valora ? printf("G\n") : printf("A\n");;
    
    return 0; 
}