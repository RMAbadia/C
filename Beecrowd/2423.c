#include <stdio.h>

int main(){
    
    int xicaras, ovos, colher;
    scanf("%d %d %d", &xicaras, &ovos, &colher);

    xicaras = (xicaras-(xicaras%2))/2;
    ovos = (ovos-(ovos%3))/3;
    colher = (colher-(colher%5))/5;

    if(xicaras <= ovos && xicaras <= colher){
        printf("%d\n", xicaras);
    }
    else if(ovos < xicaras && ovos < colher){
        printf("%d\n", ovos);
    }
    else{
        printf("%d\n", colher);
    }

    return 0; 
}