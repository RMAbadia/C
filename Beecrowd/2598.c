#include <stdio.h>

int main(){
    
    int avenidadas, comprimento, cobertura;
    scanf("%d", &avenidadas);

    while (avenidadas != 0){
        
        scanf("%d %d", &comprimento, &cobertura);

        comprimento % cobertura == 0 ? printf("%d\n", comprimento/cobertura) : printf("%d\n", (comprimento/cobertura)+1);
        
        avenidadas--;
    }

    return 0; 
}