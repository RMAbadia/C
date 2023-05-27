#include <stdio.h>

int main(){

    int entrada, experimento = 0, resp;
    while(scanf("%d", &entrada) != -1){
        experimento++;
        entrada != -1 ? printf("Experiment %d: %d full cycle(s)\n", experimento, entrada % 2 == 0 ? entrada/2 : (entrada++)/2) : 0;
    }

    return 0;
}