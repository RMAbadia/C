#include <stdio.h>

int main(){
    
    int maior, primeiro, segundo, resp;
    char operacao;
    scanf("%d", &maior);
    scanf("%d %c %d", &primeiro, &operacao, &segundo);

    if(operacao == '+'){
        resp = primeiro + segundo;
        resp > maior ? printf("OVERFLOW\n") : printf("OK\n");
    }
    else{
        resp = primeiro * segundo;
        resp > maior ? printf("OVERFLOW\n") : printf("OK\n");
    }

    return 0; 
}
