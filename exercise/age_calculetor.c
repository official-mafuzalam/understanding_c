#include <stdio.h>

// Function to calculate age
void calculateAge(int birthDay, int birthMonth, int birthYear, int currentDay, int currentMonth, int currentYear, int *age)
{
    // If the birth date is in the future
    if (currentYear < birthYear || (currentYear == birthYear && currentMonth < birthMonth) || (currentYear == birthYear && currentMonth == birthMonth && currentDay < birthDay))
    {
        printf("Invalid input. Birth date is in the future.\n");
        *age = -1; // Set age to -1 to indicate an error
        return;
    }

    *age = currentYear - birthYear;

    // Adjust age if the birthday hasn't occurred yet in the current year
    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay))
    {
        (*age)--;
    }
}

int main()
{
    int birthDay, birthMonth, birthYear;
    int currentDay, currentMonth, currentYear;
    int age;

    // Get user input for birth date
    printf("Enter your birth date (DD MM YYYY): ");
    scanf("%d %d %d", &birthDay, &birthMonth, &birthYear);

    // Get user input for the current date
    printf("Enter the current date (DD MM YYYY): ");
    scanf("%d %d %d", &currentDay, &currentMonth, &currentYear);

    // Calculate age
    calculateAge(birthDay, birthMonth, birthYear, currentDay, currentMonth, currentYear, &age);

    // Display the result
    if (age != -1)
    {
        printf("Your age is: %d years\n", age);
    }

    return 0;
}
