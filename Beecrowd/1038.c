#include <stdio.h>

int main() {

    float codigo, quantidade;
    scanf ("%f %f", &codigo, &quantidade);
    
    if (codigo == 1){
        printf("Total: R$ %.2f\n", quantidade * 4.00);
    }
    else if (codigo == 2) {
        printf("Total: R$ %.2f\n", quantidade * 4.50);
    }
    else if (codigo == 3){
        printf("Total: R$ %.2f\n", quantidade * 5.00);
    }
    else if (codigo == 4){
        printf("Total: R$ %.2f\n", quantidade * 2.00);
    }
    else{
        printf("Total: R$ %.2f\n", quantidade * 1.50);
    }
}

