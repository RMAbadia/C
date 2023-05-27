#include <stdio.h>

int main(){
    int consumo;
    scanf("%d", &consumo);

    consumo <= 10 ? printf("%d\n", 7) : 0;
    consumo > 10 && consumo <= 30 ? printf("%d\n", 7 + (consumo-10)) : 0;
    consumo > 30 && consumo <= 100 ? printf("%d\n", 27 + (consumo - 30) * 2) : 0;
    consumo > 100 ? printf("%d\n", 167 + (consumo - 100) * 5) : 0;

    return 0;
}