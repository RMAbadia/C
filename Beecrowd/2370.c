#include <stdio.h>
#include <string.h>

typedef struct _informacao{
    char nome[100];
    int abilidade;
}informacao;

void ordem_alfabetica(informacao lista[], int alunos){
    for(int i = 0; i < alunos; i++){
        for(int j = i + 1; j < alunos; j++){
            if(strncmp(lista[i].nome, lista[j].nome, 100) > 0){
                char tempnome[100];
                strcpy(tempnome, lista[i].nome);
                int tempab =  lista[i].abilidade;

                strcpy(lista[i].nome, lista[j].nome);
                strcpy(lista[j].nome, tempnome);

                lista[i].abilidade = lista[j].abilidade;
                lista[j].abilidade = tempab;
            }
        }
    }
}

int main(){

    int alunos, times;
    scanf("%d %d", &alunos, &times);
    informacao lista[alunos];
    int melhores[alunos];

    //pega as informacoes
    for(int i = 0; i < alunos; i++){
        scanf("%s %d", lista[i].nome, &lista[i].abilidade);
        melhores[i] = lista[i].abilidade;

        //colocar as abilidades em ordem decrescente
        for(int k = 0; k < i; k++){
            if(melhores[k] < melhores[i]){
                int temp = melhores[i];
                melhores[i] = melhores[k];
                melhores[k] = temp;
            }
        }
    }

    //coloca a struct em ordem alfabetica com suas respectivas abilidades
    ordem_alfabetica(lista, alunos);

    for(int x = 0; x < times; x++){
        printf("Time %d\n", x+1);
        int melhor[alunos];
        int pos = 0, temp[pos];

        //melhor recebe os valores de melhores
        for(int v = 0; v < alunos; v++){
            melhor[v] = melhores[v];
        }

        //seleciona os que irão participar de cada time
        for(int i = x; i < alunos; i += times){
            temp[pos++] = melhor[i];
        }

        //busca e imprime os nomes dos alunos ja em ordem alfabetica de cada time
        for(int j = 0; j < alunos; j++){
            for(int l = 0; l < pos; l++){
                if(lista[j].abilidade == temp[l]){
                    printf("%s\n", lista[j].nome);
                    break;
                } 

            }
        }
        printf("\n");
    }
    
    return 0;
}