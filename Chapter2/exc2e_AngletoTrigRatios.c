#include <stdio.h>
#include <math.h>

int main() {
    float angle, trigsin, trigcos, trigtan, trigcosec, trigsec, trigcot;
    printf("Insert angle (in degrees) to find all 6 trignometric ratios: \n");
    scanf("%f", &angle);
    angle = angle*3.1415/180.0;
    trigsin = sin(angle);
    trigcos = cos(angle);
    trigtan = trigsin/trigcos;
    trigcosec = 1 / trigsin;
    trigsec = 1 / trigcos;
    trigcot = 1 / trigtan;
    printf("Sin Ratio: %f, Cos Ratio: %f, Tan Ratio: %f, Cosec Ratio: %f, Sec Ratio: %f, Cot Ratio: %f\n", trigsin, trigcos, trigtan, trigcosec, trigsec, trigcot);
}

