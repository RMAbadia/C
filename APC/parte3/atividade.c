#include <stdio.h>
#include <string.h>

typedef struct _personagens{
    char personagem[10];
    int ataque;
    int defesa;
    int vitalidade;
}personagens;

int main(){

    personagens lista[6];

    //alimenta personagens
    strcpy(lista[0].personagem, "Cavaleiro");
    lista[0].ataque = 70;
    lista[0].defesa = 12;
    lista[0].vitalidade = 500;

    strcpy(lista[1].personagem, "Arqueiro");
    lista[1].ataque = 50;
    lista[1].defesa = 9;
    lista[1].vitalidade = 300;

    strcpy(lista[2].personagem, "Mago");
    lista[2].ataque = 60;
    lista[2].defesa = 5;
    lista[2].vitalidade = 250;

    strcpy(lista[3].personagem, "Orc");
    lista[3].ataque = 36;
    lista[3].defesa = 6;
    lista[3].vitalidade = 400;

    strcpy(lista[4].personagem, "Troll");
    lista[4].ataque = 56;
    lista[4].defesa = 0;
    lista[4].vitalidade = 600;

    strcpy(lista[5].personagem, "Dragao");
    lista[5].ataque = 80;
    lista[5].defesa = 15;
    lista[5].vitalidade = 800;

    char player1[10], player2[10];
    int evolucao1, evolucao2;
    int ataque1, vida1, defesa1;
    int ataque2, vida2, defesa2;

    scanf("%s %d %s %d", player1, &evolucao1, player2, &evolucao2);

    for(int j = 0; j < 6; j++){
        if(!strcmp(lista[j].personagem, player1)){
            vida1 = lista[j].vitalidade; 
            ataque1 = lista[j].ataque;
            defesa1 = lista[j].defesa;
            for(int k = 2; k <= evolucao1; k++){
                ataque1 += ataque1*(0.2);
                defesa1 += defesa1*(0.2);
            }
            continue;
        }
        else if(!strcmp(lista[j].personagem, player2)){
            vida2 = lista[j].vitalidade; 
            ataque2 = lista[j].ataque;
            defesa2 = lista[j].defesa;
            for(int k = 2; k <= evolucao2; k++){
                ataque2 += ataque2*(0.2);
                defesa2 += defesa2*(0.2);
            }
            continue;
        }
    }   

    while(vida1 > 0 && vida2 > 0){
        vida1 -= (ataque2 - defesa1) > 0 ? ataque2 - defesa1 : 0;
        vida2 -= (ataque1 - defesa2) > 0 ? ataque1 - defesa2 : 0;  
    }

    if(vida1 > 0){
        printf("%s\n", player1);
    }
    else{
        printf("%s\n", player2);
    }

    return 0;
}