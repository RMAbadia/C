#include <stdio.h>

int main(){

    float valor;

    scanf("%f", &valor);

    valor *= 100;

    printf("NOTAS:\n");

    int cem = valor / 10000;
    if (cem >= 1){
        valor -= (cem * 10000);
    }
    printf("%d nota(s) de R$ 100.00\n", cem);

    int cinquenta = valor / 5000;
    if (cinquenta >= 1){
        valor -= (cinquenta * 5000);
    }
    printf("%d nota(s) de R$ 50.00\n", cinquenta);

    int vinte = valor / 2000;
    if (vinte >= 1){
        valor -= (vinte * 2000);
    }
    printf("%d nota(s) de R$ 20.00\n", vinte);

    int dez = valor / 1000;
    if (dez >= 1){
        valor -= (dez * 1000);
    }
    printf("%d nota(s) de R$ 10.00\n", dez);

    int cinco = valor / 500;
    if (cinco >= 1){
        valor -= (cinco * 500);
    }
    printf("%d nota(s) de R$ 5.00\n", cinco);

    int dois = valor / 200;
    if (dois >= 1){
        valor -= (dois * 200);
    }
    printf("%d nota(s) de R$ 2.00\n", dois);
    

    printf("MOEDAS:\n");


    int um = valor / 100;
    if (um >= 1){
        valor -= (um * 100);
    }
    printf("%d moeda(s) de R$ 1.00\n", um);
    
    int c50 = valor / 50;
    if (c50 >= 1){
        valor -= (c50 * 50);
    }
    printf("%d moeda(s) de R$ 0.50\n", c50);

    int c25 = valor / 25;
    if (c25 >= 1){
        valor -= (c25 * 25);
    }
    printf("%d moeda(s) de R$ 0.25\n", c25);

    int c10 = valor / 10;
    if (c10 >= 1){
        valor -= (c10 * 10);
    }
    printf("%d moeda(s) de R$ 0.10\n", c10);
    
    int c5 = valor / 5;
    if (c5 >= 1){
        valor -= (c5 * 5);
    }
    printf("%d moeda(s) de R$ 0.05\n", c5);

    int c1 = valor / 1;
    if (c1 >= 1 ){
        valor -= (c1 * 1);
    }
    printf("%d moeda(s) de R$ 0.01\n", c1);

    return 0;

}