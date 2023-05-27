#include <stdio.h>
#include <string.h>

int main(){
    
    char folhas[101];
    int contO = 0, contX = 0, res = 0, totalx = 0;
    
    while(scanf("%s", folhas) != EOF){
        for(int x = 0; x <strlen(folhas); x++){
            folhas[x] == 'x' ? totalx++ : 0;
        }

        for(int i = 0; i < strlen(folhas); i++){
            folhas[i] == 'o' ? contO++ : 0;

            contX == 0 && res < contO? res = contO : 0;
            (contX != totalx && contX != 0) && res < (contO/2) ? res = (contO/2) : 0;
            contX == totalx && res < contO? res = contO : 0;

            if(folhas[i] == 'x'){
                contX++;
                contO = 0;
            }
        }

        printf("%d\n", res);
        contO = 0;
        res = 0;
        contX = 0;
        totalx = 0;
    }

    return 0; 
}
