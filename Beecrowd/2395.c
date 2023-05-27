#include <stdio.h>

int main(){
    
    int contA, contB, contC, navA, navB, navC, oplargura, opcomprimento, opaltura;

    scanf("%d %d %d", &contA, &contB, &contC);
    scanf("%d %d %d", &navA, &navB, &navC);

    oplargura = (navA/contA);
    opcomprimento = (navB/contB);
    opaltura = (navC/contC);

    printf("%d\n", oplargura*opcomprimento*opaltura);

    return 0; 
}