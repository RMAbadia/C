#include <stdio.h>

double crescimento(int populacao, double crescimento){
    return (populacao * crescimento)/100;
}

int main(){

    int casos, x, popA, popB;
    double crescA, crescB; 

    scanf("%d", &casos);

    for (x = 1; x <= casos; x++){

        int anos = 0;

        scanf("%d %d %lf %lf", &popA, &popB, &crescA, &crescB);

        while(popA <= popB){
            popA += crescimento(popA, crescA);
            popB += crescimento(popB, crescB);
            anos++;

            if (anos > 100){
                break;
            }
        }
        
        if (anos > 100){
            printf("Mais de 1 seculo.\n");
        }
        else{
            printf("%d anos.\n", anos);
        }
    }    
    return 0;
    
}