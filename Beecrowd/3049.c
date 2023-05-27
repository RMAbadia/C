#include <stdio.h>
#include <stdlib.h>

int main(){

    int superior, inferior;
    scanf("%d %d", &inferior, &superior);

    if(inferior == 80 && superior == 80){
        printf("0\n");
    }
    else if(abs(80-inferior) == abs(80-superior) && inferior != superior){
        printf("0\n");
    }
    else if(superior < 80 && inferior < 80){
        printf("2\n");
    }
    else if(superior > 80 && inferior > 80){
        printf("1\n");
    }
    else if(superior >= 80 && inferior <= 80){
        (superior - 80) > (80 - inferior) ? printf("1\n") : printf("2\n");
    }
    else if(superior <= 80 && inferior >= 80){
        (inferior - 80) > (80 - superior) ? printf("1\n") : printf("2\n");
    }
   
    return 0;
}