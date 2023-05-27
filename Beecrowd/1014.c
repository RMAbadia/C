#include <stdio.h>

int main()
{
    float percorrido, consumo;
    scanf("%f %f", &percorrido, &consumo);
    printf("%.3f km/l\n", percorrido/consumo);

    return 0;
}
