#include <stdio.h>
#include <string.h>

int main(){
    
    int M, N;

    while (scanf("%d %d", &M, &N), M != 0 || N != 0){
        char literal[11];
        sprintf(literal, "%d", M + N);

        for(int i = 0; i < strlen(literal); i++){
            literal[i] != '0' ? printf("%c", literal[i]) : 0;
        }

        printf("\n");
    }
    
    return 0;
}