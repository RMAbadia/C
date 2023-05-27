#include <stdio.h>

int minimodivisor(int div1, int div2){
    int mmc = div1 > div2 ? div1 : div2;
    while(1){
        if(mmc % div1 == 0 && mmc % div2 == 0){
            break;
        }
        mmc++;
    }
    return mmc;
}

int minimiza(int cima, int baixo){
    int menor = cima < baixo ? cima : baixo;
    for(int j = 2; j <= menor; j == 2 ? j++ : (j = j+2)){
        while(cima % j == 0 && baixo % j == 0){
            cima /= j;
            baixo /= j;
        }
    }

    return printf("%d %d\n", cima, baixo);
}

int main(){

    int valor1, valor2, div1, div2, res1, resdiv;
    scanf("%d %d %d %d", &valor1, &div1, &valor2, &div2);

    if(div1 == div2 && (valor1+valor2)%div1 == 0){
        printf("%d 1\n", (valor1+valor2)/div1);
    }
    else if(div1 == div2){
        res1 = (valor1) + (valor2);
        minimiza(res1, div1); 
    }
    else{
        resdiv = (minimodivisor(div1, div2));
        res1 = ((resdiv/div1)*valor1) + ((resdiv/div2)*valor2);
        minimiza(res1, resdiv);
    }

    return 0;
}