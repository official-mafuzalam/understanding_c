#include <stdio.h>
#include <string.h>

#define MAX_ITEMS_MOBILE 2
#define MAX_ITEMS_COMPUTER 6
#define MAX_ITEM_NAME_LENGTH 100

int cart_price = 0;
int cart[MAX_ITEMS_MOBILE + MAX_ITEMS_COMPUTER] = {0}; // Initialize all items in the cart to 0

char item[MAX_ITEMS_MOBILE + MAX_ITEMS_COMPUTER][MAX_ITEM_NAME_LENGTH] = {
    "I Phone 14 Pro Max",
    "Samsung S23 Ultra",
    "Lenovo IdeaPad 1 14AMN7 AMD Ryzen 5 14 FHD Laptop",
    "Microsoft Surface Go 3 Pentium Gold 6500Y 10.5 MultiTouch Laptop",
    "HP 250 G8 Intel Celeron N4020 15.6 FHD Laptop",
    "Dell Vostro 14 3400 Core i3 11th Gen 14 HD Laptop",
    "Lenovo IdeaPad 1 14AMN7 AMD Ryzen 5 14 FHD Laptop",
    "Asus Vivobook E210MA Celeron N4020 11.6 HD Laptop"};

void mobile_func();
void computer_func();
void cart_show();
void print_func(char text[]);
void star_print();

int main()
{
    int choice;

    star_print();
    print_func("       Welcome to Shopping project           ");

    do
    {
        star_print();
        print_func("Which category product you want to buy: \n");
        print_func("1. Mobile \n");
        print_func("2. Computer & Laptop \n");
        // print_func("3. Accessories \n");
        // print_func("4. Scanner & Printer \n");
        print_func("5. Check out & Exit \n");

        print_func("Enter your choice: ");
        scanf("%d", &choice);
        star_print();

        switch (choice)
        {
        case 1:
            mobile_func();
            break;

        case 2:
            computer_func();
            break;

        case 5:
            cart_show();
            break;

        default:
            print_func("You entered a wrong number.");
            break;
        }

    } while (choice != 5);

    return 0;
}

void mobile_func()
{
    int item_price[MAX_ITEMS_MOBILE] = {249, 299};

    print_func("Mobile Phones:");

    while (1)
    {
        star_print();
        print_func("Choose your phone or enter -1 to main menu: \n");

        for (int i = 0; i < MAX_ITEMS_MOBILE; i++)
        {
            printf("\t%d - %s - price: %d$\n", i, item[i], item_price[i]);
        }

        int choice;
        print_func("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == -1)
        {
            break; // Exit the loop if -1 is entered
        }

        if (choice >= 0 && choice < MAX_ITEMS_MOBILE)
        {
            printf("\tAdded to cart: %s\n", item[choice]);
            cart[choice]++;                   // Increase the count of selected item in the cart
            cart_price += item_price[choice]; // Update cart price
        }
        else
        {
            print_func("Invalid choice. Please try again.\n");
        }
    }
}

void computer_func()
{
    int item_price[MAX_ITEMS_COMPUTER] = {249, 239, 199, 179, 219, 239};

    print_func("Laptops:");

    while (1)
    {
        star_print();
        print_func("Choose your Laptop or enter -1 to main menu: \n");

        for (int i = 0; i < MAX_ITEMS_COMPUTER; i++)
        {
            printf("\t%d - %s - price: %d$\n", i, item[MAX_ITEMS_MOBILE + i], item_price[i]);
        }

        int choice;
        print_func("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == -1)
        {
            break; // Exit the loop if -1 is entered
        }

        if (choice >= 0 && choice < MAX_ITEMS_COMPUTER)
        {
            printf("\tAdded to cart: %s\n", item[MAX_ITEMS_MOBILE + choice]);
            cart[MAX_ITEMS_MOBILE + choice]++; // Increase the count of selected item in the cart
            cart_price += item_price[choice];  // Update cart price
        }
        else
        {
            print_func("Invalid choice. Please try again.\n");
        }
    }
}

void cart_show()
{
    int cart_empty = 1; // Flag to check if the cart is empty

    print_func("Items in the cart:\n");

    // Display mobile phones in the cart
    print_func("Mobile Phones:\n");
    for (int i = 0; i < MAX_ITEMS_MOBILE; i++)
    {
        if (cart[i] > 0)
        {
            printf("\t%s (Quantity: %d)\n", item[i], cart[i]);
            cart_empty = 0; // Cart is not empty
        }
    }

    // Display laptops in the cart
    print_func("Laptops:\n");
    for (int i = 0; i < MAX_ITEMS_COMPUTER; i++)
    {
        if (cart[MAX_ITEMS_MOBILE + i] > 0)
        {
            printf("\t%s (Quantity: %d)\n", item[MAX_ITEMS_MOBILE + i], cart[MAX_ITEMS_MOBILE + i]);
            cart_empty = 0; // Cart is not empty
        }
    }

    // If cart is not empty, get name and mobile
    if (!cart_empty)
    {
        char mobile[15];

        print_func("Enter your mobile: ");
        scanf("%s", mobile);

        FILE *fInvoice = fopen(mobile, "a"); // Open file in append mode

        if (fInvoice == NULL)
        {
            printf("Error opening file!\n");
            return;
        }

        // Save name and mobile to file
        fprintf(fInvoice, "Mobile: %s\n\n", mobile);
        fprintf(fInvoice, "*******************************");
        fprintf(fInvoice, "\nItems in the cart:\n");

        // Display mobile phones in the cart
        fprintf(fInvoice, "Mobile Phones:\n");
        for (int i = 0; i < MAX_ITEMS_MOBILE; i++)
        {
            if (cart[i] > 0)
            {
                fprintf(fInvoice, "\t%s (Quantity: %d)\n", item[i], cart[i]);
                cart_empty = 0; // Cart is not empty
            }
        }

        // Display laptops in the cart
        fprintf(fInvoice, "Laptops:\n");
        for (int i = 0; i < MAX_ITEMS_COMPUTER; i++)
        {
            if (cart[MAX_ITEMS_MOBILE + i] > 0)
            {
                fprintf(fInvoice, "\t%s (Quantity: %d)\n", item[MAX_ITEMS_MOBILE + i], cart[MAX_ITEMS_MOBILE + i]);
                cart_empty = 0; // Cart is not empty
            }
        }

        // Display total price
        printf("\n\n\tTotal price is: %d$\n", cart_price);
        fprintf(fInvoice, "Total price is: %d$\n\n", cart_price);
        star_print();

        fclose(fInvoice);
    }
    else
    {
        print_func("Cart is empty!\n");
    }
}

void print_func(char text[])
{
    printf("\t\033[0;36m%s\033[0m", text);
}

void star_print()
{
    printf("\n\033[0;31m********************************************************\033[0m\n");
}
