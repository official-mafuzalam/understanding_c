#include <stdio.h>
#include <stdbool.h> // Import the boolean header file

int main()
{
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    printf("%d\n", isProgrammingFun); // Returns 1 (true)
    printf("%d\n", isFishTasty);      // Returns 0 (false)

    printf("%d", isProgrammingFun == isFishTasty); // Returns 1 (true) because 10 is greater than 9

    return 0;
}