#include <stdio.h>
#include <string.h>

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
void star_print();

int main()
{
    char start;
    int choice;

    star_print();
    print_func("\t             Welcome to C's Shop               ");
    // print_func("\nDeveloped by: ");
    // print_func("\nMd. Mafuz Alam, Mubaswir Hasan Munna, Rukaiya Nura Akhter, Md. Rahat Ali, Ridoy Hossen");
    // print_func("\n \nLet's gets started.");
    star_print();

    do
    {
        print_func("Which category product you want to buy: \n");
        print_func("1. Mobile \n");
        print_func("2. Computer & Laptop \n");
        print_func("3. Accessories \n");
        print_func("4. Scanner & Printer \n");
        print_func("5. Exit. \n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            mobile_func();
            break;

        case 2:
            computer_func();
            break;

        default:
            print_func("You enter a wrong number.");
            break;
        }

    } while (choice != 5);

    return 0;
}

void mobile_func()
{
    int num_item = 2;

    char item[][MAX_ITEM_NAME_LENGTH] = {"I Phone 14 Pro Max", "Samsung S23 Ultra"};
    int item_price[2] = {249, 299};
    int cart[2] = {0}; // Initialize all items in the cart to 0

    while (1)
    {
        printf("Choose your phone or enter -1 to exit: \n");

        for (int i = 0; i < num_item; i++)
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

        if (choice >= 0 && choice < num_item)
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
    for (int i = 0; i < num_item; i++)
    {
        if (cart[i] > 0)
        {
            printf("%d - %s (Quantity: %d)\n", i, item[i], cart[i]);
        }
    }
    printf("Total price is: %d$\n", cart_price);
}

void computer_func()
{
    int num_item = 6;
    char item[][MAX_ITEM_NAME_LENGTH] = {"Lenovo IdeaPad 1 14AMN7 AMD Ryzen 5 14 FHD Laptop",
                                         "Microsoft Surface Go 3 Pentium Gold 6500Y 10.5 MultiTouch Laptop",
                                         "HP 250 G8 Intel Celeron N4020 15.6 FHD Laptop",
                                         "Dell Vostro 14 3400 Core i3 11th Gen 14 HD Laptop",
                                         "Lenovo IdeaPad 1 14AMN7 AMD Ryzen 5 14 FHD Laptop",
                                         "Asus Vivobook E210MA Celeron N4020 11.6 HD Laptop"};
    int item_price[6] = {249, 239, 199, 179, 219, 239};
    int cart[6] = {0}; // Initialize all items in the cart to 0

    while (1)
    {
        printf("Choose your Laptop or enter -1 to exit: \n");

        for (int i = 0; i < num_item; i++)
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

        if (choice >= 0 && choice < num_item)
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
    for (int i = 0; i < num_item; i++)
    {
        if (cart[i] > 0)
        {
            printf("%d - %s (Quantity: %d)\n", i, item[i], cart[i]);
        }
    }
    printf("Total price is: %d$\n", cart_price);
}

void star_print()
{
    printf("\n********************************************************\n");
}
