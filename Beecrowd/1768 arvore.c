#include <stdio.h>
#include <string.h>

int main(){
    
    int folhas;
    
    while(scanf("%d", &folhas) != EOF){
        int tronco = (folhas+1)/2;
        for(int i = 1; i <= tronco; i++){
            int temp = (tronco+i);
            for(int x = 1; x < temp; x++){
                x > tronco-i? printf("*") : printf(" ");
            }
            printf("\n");
        }

        for(int i = 1; i <= 2; i++){
            int temp = (tronco+i);
            for(int x = 1; x < temp; x++){
                x > tronco-i? printf("*") : printf(" ");
            }
            printf("\n");
        }
        printf("\n");

    }

    return 0;
} 