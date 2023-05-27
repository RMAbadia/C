#include <stdio.h>

int main(){

    long long fib[61];
    int chamadas, pos;

    scanf("%d", &chamadas);

    for (int x = 2; x <= 60; x++){
        fib[0] = 0;
        fib[1] = 1;
        fib[x] = fib[x-1] + fib[x-2];
    }

    for (int z = 0; z < chamadas; z++){
        scanf("%d", &pos);
        printf("Fib(%d) = %lld\n", pos, fib[pos]);
    } 

    return 0;
    
}