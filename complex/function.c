#include <stdio.h>

void calculateTax(float a, float *tax, float *totalPrice)
{
    if (a <= 99)
    {
        *tax = a * 6.5 / 100;
        *totalPrice = a + *tax;
    }
    else if (a <= 299)
    {
        *tax = a * 9.5 / 100;
        *totalPrice = a + *tax;
    }
    else if (a <= 999)
    {
        *tax = a * 11.6 / 100;
        *totalPrice = a + *tax;
    }
    else if (a <= 9999)
    {
        *tax = a * 13.4 / 100;
        *totalPrice = a + *tax;
    }
    else if (a <= 99999)
    {
        *tax = a * 14.4 / 100;
        *totalPrice = a + *tax;
    }
}

float newTax(float price)
{
    float total;

    total = price + (price * 0.025);
    return total;
}

int main()
{
    float price, tax, totalPrice;
    printf("Enter product price: ");
    scanf("%f", &price);

    // calculateTax(price, &tax, &totalPrice);

    printf("Total price is: %f ", newTax(price));

    return 0;
}
