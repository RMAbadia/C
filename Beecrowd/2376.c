#include <stdio.h>

int main(){

    char primeira, segunda, terceira, quarta, quinta, sexta, setima, oitava, quarta1, quarta2, quarta3, quarta4, semi1, semi2, final;
    int jogos = 0, placar1, placar2;
    
    while(jogos < 16){
        scanf("%d %d", &placar1, &placar2);
        jogos++;
        switch (jogos)
        {
        case 1:
            placar1 > placar2 ? primeira = 'A' : (primeira = 'B');
            break;
        case 2:
            placar1 > placar2 ? segunda = 'C' : (segunda = 'D');
            break;
        case 3:
            placar1 > placar2 ? terceira = 'E' : (terceira = 'F');
            break;
        case 4:
            placar1 > placar2 ? quarta = 'G' : (quarta = 'H');
            break;
        case 5:
            placar1 > placar2 ? quinta = 'I' : (quinta = 'J');
            break;
        case 6:
            placar1 > placar2 ? sexta = 'K' : (sexta = 'L');
            break;
        case 7:
            placar1 > placar2 ? setima = 'M' : (setima = 'N');
            break;
        case 8:
            placar1 > placar2 ? oitava = 'O' : (oitava = 'P');
            break;
        case 9:
            placar1 > placar2 ? quarta1 = primeira : (quarta1 = segunda);
            break;
        case 10:
            placar1 > placar2 ? quarta2 = terceira : (quarta2 = quarta);
            break;
        case 11:
            placar1 > placar2 ? quarta3 = quinta : (quarta3 = sexta);
            break;
        case 12:
            placar1 > placar2 ? quarta4 = setima : (quarta4 = oitava);
            break;
        case 13:
            placar1 > placar2 ? semi1 = quarta1 : (semi1 = quarta2);
            break;
        case 14:
            placar1 > placar2 ? semi2 = quarta3 : (semi2 = quarta4);
            break;
        case 15:
            placar1 > placar2 ? final = semi1 : (final = semi2);
            break;
        }
    }

    printf("%c\n", final);

    return 0;
}