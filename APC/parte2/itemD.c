#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    
    int quantidade;
    scanf("%d", &quantidade);
    quantidade++;
    char modelo[quantidade];
    int disp[quantidade];

    for(int i = 0; i < quantidade; i++){
        scanf("%s %d", modelo[i], disp[i]);
        printf("%s %d\n", modelo, disp);
    }

    
   
    return 0; 
} 