#include <stdio.h>

int main(){
    
    int participantes, votos, carlos, venceu = 0;
    scanf("%d", &participantes);

    for(int i = 0; i < participantes; i++){
        scanf("%d", &votos);
        i == 0 ? carlos = votos : 0;
        carlos >= votos ? venceu++ : 0;
    }

    venceu == participantes ? printf("S\n") : printf("N\n");
    
    return 0; 
}
