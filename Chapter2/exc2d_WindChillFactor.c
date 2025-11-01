#include <stdio.h>
#include <math.h>

int main() {
    float t, v, wcf;
    printf("Type the air temperature (in Fahrenheit) and wind velocity (in mph (damn americans!)) to find the wind chill factor: \n");
    scanf("%f %f", &t, &v);
    wcf =35.74 + 0.6215*t + (0.4275*t - 35.75)*pow(v, 0.16);
    printf("Wind chill factor: %f\n", wcf);
}
