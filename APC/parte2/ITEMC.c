#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void swap(char lista[], char entrada, char saida){
    for(int i = 0; i < strlen(lista); i++){
        lista[i] == entrada ? lista[i] = '\n' : 0;
        i != 0 ? lista[i] = tolower(lista[i]) : 0;
    }
}

int main(){
    
    char primeiro[101], segundo[101];

    scanf("%s %s", segundo, primeiro);

    swap(segundo, ',', ' ');
    swap(primeiro, ',', ' ');
    
    printf("%s %s", primeiro, segundo);
   
    return 0; 
} 