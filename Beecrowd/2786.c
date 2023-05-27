#include <stdio.h>

int main(){
    
    int largura, comprimento, tipo1 = 0, tipo2 = 0;
    scanf("%d %d", &largura, &comprimento);

    tipo2 += ((largura-1) + (comprimento-1))*2;
    tipo1 += (largura*comprimento) + ((largura-1) * (comprimento-1));
    
    printf("%d\n%d\n", tipo1, tipo2);
    
    return 0; 
}
