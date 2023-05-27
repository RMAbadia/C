#include <stdio.h>

int main(){
    
    int recorrencia, bot1, bot2;
    scanf("%d", &recorrencia);

    while(recorrencia != 0){
        scanf("%d %d", &bot1, &bot2);
        int soma = bot1 + bot2;
    
        switch (soma){
        case 0:
            printf("PROXYCITY\n");
            break;
        case 1:
            printf("P.Y.N.G.\n");
            break;
        case 2:
            printf("DNSUEY!\n");
            break;
        case 3:
            printf("SERVERS\n");
            break;
        case 4:
            printf("HOST!\n");
            break;
        case 5:
            printf("CRIPTONIZE\n");
            break;
        case 6:
            printf("OFFLINE DAY\n");
            break;
        case 7:
            printf("SALT\n");
            break;
        case 8:
            printf("ANSWER!\n");
            break;
        case 9:
            printf("RAR?\n");
            break;
        default:
            printf("WIFI ANTENNAS\n");
            break;
        }
        
        recorrencia--;
    }

    return 0; 
}