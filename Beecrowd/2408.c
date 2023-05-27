#include <stdio.h>

void ordem(int lista[]){

    for(int j = 0; j < 3; j++){
        for(int k = j+1; k < 3; k++){
            if(lista[k] < lista[j]){
                int temp = lista[k];
                lista[k] = lista[j];
                lista[j] = temp; 
            }
        }
    }
}

int main(){
    
    int lista[3];

    for(int i = 0; i < 3; i++){
        scanf("%d", &lista[i]);
    }

    ordem(lista);

    printf("%d\n", lista[1]);

    return 0; 
}