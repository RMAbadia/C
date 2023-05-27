#include<stdio.h>
#include<math.h>

int main (){
    
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    int maior = 0;
    if (maior < A ){
        maior = A;
    }
    if (maior < B ){
        maior = B;
    }
    if (maior < C ){
        maior = C;
    }
    printf("%d eh o maior\n", maior);

    return 0;
}

