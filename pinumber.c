#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    double k, pi = 0, n = 0, dif;

    printf("Input the number of iteration to determine Pi: ");
    scanf("%lf", &k);

    while (n <= k)
        {
            pi = pi + 4 * pow(-1, n) / (2 * n + 1);
            n = n + 1;
            dif = fabs(3.141592653589793 - pi);            
            printf("%.0lf - %.15lf - difference: %.15lf - %.13lf\n", n, pi, dif, 100 * fabs(3.141592653589793 / pi));
        }
    return 0;
}