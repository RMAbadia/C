#include <stdio.h>
#include <string.h>

int main(){

    int estrelas, ovelhas, local = 0;
    long long atac = 0, sobraram = 0;

    scanf("%d", &estrelas);
    int casas[estrelas];

    int atacados[estrelas];
    memset(atacados, 0, sizeof atacados);


    for(int x = 0; x < estrelas; x++)
    {
        scanf("%d", &ovelhas);
        casas[x] = ovelhas;
    }

    while (local >= 0 && local < estrelas)
    {
        atacados[local] = 1;
        int andar = casas[local] % 2 == 0 ? -1 : 1;
        if(casas[local] > 0){
            casas[local]--;
        }
        local += andar;
    }

    for(int i = 0; i < estrelas; i++)
    {
        sobraram += casas[i];
        atac += atacados[i];
    }

    printf("%lld %lld\n", atac, sobraram);


    return 0;
}  