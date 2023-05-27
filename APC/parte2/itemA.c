#include <stdio.h>
#include <string.h>

int main(){
    
    int containers, carga, soma = 0;
    scanf("%d", &containers);

    while (containers !=0 )
    {
        scanf("%d", &carga);

        soma += carga;

        containers--;
    }
    
    printf("Carga total: %d kilogramas\n", soma);
    
    return 0;
} 