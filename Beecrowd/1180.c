/*Faça um programa que leia um valor N. Este N será o tamanho de um vetor X[N]. A seguir, leia cada um dos 
valores de X, encontre o menor elemento deste vetor e a sua posição dentro do vetor, mostrando esta 
informação.*/

#include <stdio.h>

int main(){

    int tamanho, menor, posicao;
    scanf("%d", &tamanho);

    int lista[tamanho], x = 0, valor;

    do{
        scanf("%d", &valor);
        lista[x] = valor;

        if(x == 0 || menor > valor){
            menor = valor;
            posicao = x;
        }

        x++;
    }while(x < tamanho);

    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);    

    return 0;
    
}