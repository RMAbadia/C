#include <stdio.h>

int main(){
    
    int colocacao, top;
    scanf("%d", &colocacao);

    colocacao < 101 ? top = 100 : 0;
    colocacao < 51 ? top = 50 : 0;
    colocacao < 26 ? top = 25 : 0;
    colocacao < 11 ? top = 10 : 0;
    colocacao < 6 ? top = 5 : 0;
    colocacao < 4 ? top = 3 : 0;
    colocacao == 1 ? top = 1: 0;

    printf("Top %d\n", top);

    return 0; 
}