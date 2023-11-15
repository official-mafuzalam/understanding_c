#include <stdio.h>

int main()
{
    double a;
    int b;

    printf("Enter the base (a): ");
    scanf("%lf", &a);

    printf("Enter the exponent (b): ");
    scanf("%d", &b);

    if (b < 0)
    {
        printf("Exponent should be a non-negative integer.\n");
    }
    else
    {

        double result = 1.0;
        int i;

        for (i = 0; i < b; i++)
        {
            result *= a;
        }

        printf("%.2lf^%d = %.2lf\n", a, b, result);
    }

    return 0;
}
