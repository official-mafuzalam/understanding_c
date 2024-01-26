#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 2
#define MAX_ITEM_NAME_LENGTH 500

int cart_price = 0;

void print_func(char text[])
{
    printf("%s", text);
}

void mobile_func();
void computer_func();
void accessories_func();
void printer_func();

int main()
{
    char start;

    print_func("\nWelcome to C's quiz application");
    print_func("\nDeveloped by Intake - 45 (DH), Section - 1");
    print_func("\nTeam members: Md. Mafuz Alam, Mubaswir Hasan Munna, Rukaiya Nura Akhter, Md. Rahat Ali, Ridoy Hossen");
    print_func("\n \nLet's gets started.");
    print_func("\nFor start type 's'");

    scanf("%c", &start);

    if (start == 's')
    {
        int chose;

        print_func("Which category product you want to buy: \n");
        print_func("1. Mobile \n");
        print_func("2. Computer & Laptop \n");
        print_func("3. Accessories \n");
        print_func("4. Scanner & Printer \n");

        scanf("%d", &chose);

        switch (chose)
        {
        case 1:
            mobile_func();
            break;

        case 2:
            computer_func();
            break;

        default:
            break;
        }
    }
    else
    {
        print_func("Wrong input");
    }

    return 0;
}

void mobile_func()
{
    char item[][MAX_ITEM_NAME_LENGTH] = {"I Phone 14 Pro Max", "Samsung S23 Ultra"};
    int item_price[MAX_ITEMS] = {249, 299};
    int cart[MAX_ITEMS] = {0}; // Initialize all items in the cart to 0

    while (1)
    {
        printf("Choose your phone or enter -1 to exit: \n");

        for (int i = 0; i < MAX_ITEMS; i++)
        {
            printf("%d - %s - price: %d$\n", i, item[i], item_price[i]);
        }

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == -1)
        {
            break; // Exit the loop if -1 is entered
        }

        if (choice >= 0 && choice < MAX_ITEMS)
        {
            printf("Added to cart: %s\n", item[choice]);
            cart[choice]++;                   // Increase the count of selected item in the cart
            cart_price += item_price[choice]; // Update cart price
        }
        else
        {
            printf("Invalid choice. Please try again.\n");
        }
    }

    // Display the items in the cart
    printf("Items in the cart:\n");
    for (int i = 0; i < MAX_ITEMS; i++)
    {
        if (cart[i] > 0)
        {
            printf("%d - %s (Quantity: %d)\n", i, item[i], cart[i]);
        }
    }
    printf("Total price is: %d$\n", cart_price);
}

void computer_func() {
    char item[][MAX_ITEM_NAME_LENGTH] = {"I Phone 14 Pro Max", "Samsung S23 Ultra"};
    int item_price[MAX_ITEMS] = {249, 299};
    int cart[MAX_ITEMS] = {0}; // Initialize all items in the cart to 0

    while (1) {
        printf("Choose your phone or enter -1 to exit: \n");

        for (int i = 0; i < MAX_ITEMS; i++) {
            printf("%d - %s - price: %d$\n", i, item[i], item_price[i]);
        }

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == -1) {
            break; // Exit the loop if -1 is entered
        }

        if (choice >= 0 && choice < MAX_ITEMS) {
            printf("Added to cart: %s\n", item[choice]);
            cart[choice]++; // Increase the count of selected item in the cart
            cart_price += item_price[choice]; // Update cart price
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    // Display the items in the cart
    printf("Items in the cart:\n");
    for (int i = 0; i < MAX_ITEMS; i++) {
        if (cart[i] > 0) {
            printf("%d - %s (Quantity: %d)\n", i, item[i], cart[i]);
        }
    }
    printf("Total price is: %d$\n", cart_price);
}