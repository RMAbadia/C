#include <stdio.h>
 
int main() {
 
    int dias;
    scanf("%i", &dias);

    printf("%i ano(s)\n", dias/365);
    dias %= 365;

    printf("%i mes(es)\n", dias/30);
    dias %= 30;

    printf("%i dia(s)\n", dias);

    return 0;
}