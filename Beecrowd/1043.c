#include <stdio.h>
   
int main() {

    float x, y, z, cond1, cond2, cond3;
    scanf("%f %f %f", &x, &y, &z);

    cond1 = x + y;
    cond2 = x + z;
    cond3 = z + y;

    if(cond1 > z & cond2 > y & cond3 > x){
        printf("Perimetro = %.1f\n", x + y + z);
    }

    else{
        printf("Area = %.1f\n", ((x+y)*z)/2);
    }

    return 0;
}

