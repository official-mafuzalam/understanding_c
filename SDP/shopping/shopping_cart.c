#include <stdio.h>
#include <string.h>
#include <stdarg.h> // Include this for va_list

#define MAX_ITEMS_MOBILE 7
#define MAX_ITEMS_COMPUTER 7
#define MAX_ITEMS_KEYBOARD 6
#define MAX_ITEMS_HEADPHONE 8
#define MAX_ITEM_NAME_LENGTH 100

char mobile_item[MAX_ITEMS_MOBILE][MAX_ITEM_NAME_LENGTH];
char laptop_item[MAX_ITEMS_COMPUTER][MAX_ITEM_NAME_LENGTH];
char keyboard_item[MAX_ITEMS_KEYBOARD][MAX_ITEM_NAME_LENGTH];
char headphone_item[MAX_ITEMS_HEADPHONE][MAX_ITEM_NAME_LENGTH];
int mobile_price[MAX_ITEMS_MOBILE];
int laptop_price[MAX_ITEMS_COMPUTER];
int keyboard_price[MAX_ITEMS_KEYBOARD];
int headphone_price[MAX_ITEMS_HEADPHONE];

int mobile_cart[MAX_ITEMS_MOBILE] = {0};
int laptop_cart[MAX_ITEMS_COMPUTER] = {0};
int keyboard_cart[MAX_ITEMS_KEYBOARD] = {0};
int headphone_cart[MAX_ITEMS_HEADPHONE] = {0};
int mobile_cart_price = 0;
int laptop_cart_price = 0;
int keyboard_cart_price = 0;
int headphone_cart_price = 0;

void mobile_func();
void computer_func();
void keyboard_func();
void headphone_func();
void cart_show();
void print_func(const char *fmt, ...); // Declare print_func with variable arguments
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
        print_func("3. Keyboard & Mouse \n");
        print_func("4. Headphone \n");
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

        case 3:
            keyboard_func();
            break;

        case 4:
            headphone_func();
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

void read_mobile_items()
{
    FILE *file = fopen("products/mobile.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    for (int i = 0; i < MAX_ITEMS_MOBILE && !feof(file); i++)
    {
        fscanf(file, "%[^-] - %d\n", mobile_item[i], &mobile_price[i]);
    }

    fclose(file);
}

void read_laptop_items()
{
    FILE *file = fopen("products/laptop.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    for (int i = 0; i < MAX_ITEMS_COMPUTER && !feof(file); i++)
    {
        fscanf(file, "%[^-] - %d\n", laptop_item[i], &laptop_price[i]);
    }

    fclose(file);
}

void read_keyboard_items()
{
    FILE *file = fopen("products/keyboard.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    for (int i = 0; i < MAX_ITEMS_KEYBOARD && !feof(file); i++)
    {
        fscanf(file, "%[^-] - %d\n", keyboard_item[i], &keyboard_price[i]);
    }

    fclose(file);
}

void read_headphone_items()
{
    FILE *file = fopen("products/headphone.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    for (int i = 0; i < MAX_ITEMS_HEADPHONE && !feof(file); i++)
    {
        fscanf(file, "%[^-] - %d\n", headphone_item[i], &headphone_price[i]);
    }

    fclose(file);
}

void mobile_func()
{
    read_mobile_items();

    print_func("Mobile Phones:");

    while (1)
    {
        star_print();
        print_func("Choose your phone or enter -1 to main menu: \n");

        for (int i = 0; i < MAX_ITEMS_MOBILE; i++)
        {
            printf("\t%d - %s - price: %d TK\n", i, mobile_item[i], mobile_price[i]);
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
            printf("\tAdded to cart: %s\n", mobile_item[choice]);
            mobile_cart[choice]++;                     // Increase the count of selected item in the cart
            mobile_cart_price += mobile_price[choice]; // Update cart price
        }
        else
        {
            print_func("Invalid choice. Please try again.\n");
        }
    }
}

void computer_func()
{
    read_laptop_items();

    print_func("Laptops:");

    while (1)
    {
        star_print();
        print_func("Choose your Laptop or enter -1 to main menu: \n");

        for (int i = 0; i < MAX_ITEMS_COMPUTER; i++)
        {
            printf("\t%d - %s - price: %d TK\n", i, laptop_item[i], laptop_price[i]);
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
            printf("\tAdded to cart: %s\n", laptop_item[choice]);
            laptop_cart[choice]++;                     // Increase the count of selected item in the cart
            laptop_cart_price += laptop_price[choice]; // Update cart price
        }
        else
        {
            print_func("Invalid choice. Please try again.\n");
        }
    }
}

void keyboard_func()
{
    read_keyboard_items();

    print_func("Keyboard & Mouse:");

    while (1)
    {
        star_print();
        print_func("Choose your Keyboard & Mouse or enter -1 to main menu: \n");

        for (int i = 0; i < MAX_ITEMS_KEYBOARD; i++)
        {
            printf("\t%d - %s - price: %d TK\n", i, keyboard_item[i], keyboard_price[i]);
        }

        int choice;
        print_func("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == -1)
        {
            break; // Exit the loop if -1 is entered
        }

        if (choice >= 0 && choice < MAX_ITEMS_KEYBOARD)
        {
            printf("\tAdded to cart: %s\n", keyboard_item[choice]);
            keyboard_cart[choice]++;                       // Increase the count of selected item in the cart
            keyboard_cart_price += keyboard_price[choice]; // Update cart price
        }
        else
        {
            print_func("Invalid choice. Please try again.\n");
        }
    }
}

void headphone_func()
{
    read_headphone_items();

    print_func("Headphone:");

    while (1)
    {
        star_print();
        print_func("Choose your Headphone or enter -1 to main menu: \n");

        for (int i = 0; i < MAX_ITEMS_HEADPHONE; i++)
        {
            printf("\t%d - %s - price: %d TK\n", i, headphone_item[i], headphone_price[i]);
        }

        int choice;
        print_func("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == -1)
        {
            break; // Exit the loop if -1 is entered
        }

        if (choice >= 0 && choice < MAX_ITEMS_HEADPHONE)
        {
            printf("\tAdded to cart: %s\n", headphone_item[choice]);
            headphone_cart[choice]++;                        // Increase the count of selected item in the cart
            headphone_cart_price += headphone_price[choice]; // Update cart price
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

    int total_price = mobile_cart_price + laptop_cart_price + keyboard_cart_price + headphone_cart_price;

    print_func("Items in the cart:\n");

    // Display mobile phones in the cart
    print_func("Mobile Phones:\n");
    for (int i = 0; i < MAX_ITEMS_MOBILE; i++)
    {
        if (mobile_cart[i] > 0)
        {
            printf("\t%s - quantity: %d - total price: %d TK\n", mobile_item[i], mobile_cart[i], mobile_cart[i] * mobile_price[i]);
            cart_empty = 0; // Cart is not empty
        }
    }

    // Display laptops in the cart
    print_func("Laptops:\n");
    for (int i = 0; i < MAX_ITEMS_COMPUTER; i++)
    {
        if (laptop_cart[i] > 0)
        {
            printf("\t%s - quantity: %d - total price: %d TK\n", laptop_item[i], laptop_cart[i], laptop_cart[i] * laptop_price[i]);
            cart_empty = 0; // Cart is not empty
        }
    }

    // Display Keyboard & Mouse in the cart
    print_func("Keyboard & Mouse:\n");
    for (int i = 0; i < MAX_ITEMS_KEYBOARD; i++)
    {
        if (keyboard_cart[i] > 0)
        {
            printf("\t%s - quantity: %d - total price: %d TK\n", keyboard_item[i], keyboard_cart[i], keyboard_cart[i] * keyboard_price[i]);
            cart_empty = 0; // Cart is not empty
        }
    }

    // Display Headphone in the cart
    print_func("Headphone:\n");
    for (int i = 0; i < MAX_ITEMS_HEADPHONE; i++)
    {
        if (headphone_cart[i] > 0)
        {
            printf("\t%s - quantity: %d - total price: %d TK\n", headphone_item[i], headphone_cart[i], headphone_cart[i] * headphone_price[i]);
            cart_empty = 0; // Cart is not empty
        }
    }

    printf("\n\n\tTotal price is: %d TK\n", total_price);

    // If cart is not empty, get name and mobile
    if (!cart_empty)
    {
        char mobile[15];
        char filepath[30]; // To store the file path

        print_func("Enter your mobile: ");
        scanf("%s", mobile);

        // Construct the file path
        sprintf(filepath, "orders/%s.txt", mobile);

        FILE *fInvoice = fopen(filepath, "a"); // Open file in append mode in the orders folder

        if (fInvoice == NULL)
        {
            printf("Error opening file!\n");
            return;
        }

        // Save name and mobile to file
        fprintf(fInvoice, "Mobile: %s\n\n", mobile);
        fprintf(fInvoice, "*******************************\n");
        fprintf(fInvoice, "Items in the cart:\n");

        // Display mobile phones in the cart
        fprintf(fInvoice, "\nMobile Phones:\n");
        for (int i = 0; i < MAX_ITEMS_MOBILE; i++)
        {
            if (mobile_cart[i] > 0)
            {
                fprintf(fInvoice, "\t%s - quantity: %d - total price: %d TK\n", mobile_item[i], mobile_cart[i], mobile_cart[i] * mobile_price[i]);
            }
        }

        // Display laptops in the cart
        fprintf(fInvoice, "\nLaptops:\n");
        for (int i = 0; i < MAX_ITEMS_COMPUTER; i++)
        {
            if (laptop_cart[i] > 0)
            {
                fprintf(fInvoice, "\t%s - quantity: %d - total price: %d TK\n", laptop_item[i], laptop_cart[i], laptop_cart[i] * laptop_price[i]);
            }
        }

        // Display Keyboard & Mouse in the cart
        fprintf(fInvoice, "\nKeyboard & Mouse:\n");
        for (int i = 0; i < MAX_ITEMS_KEYBOARD; i++)
        {
            if (keyboard_cart[i] > 0)
            {
                fprintf(fInvoice, "\t%s - quantity: %d - total price: %d TK\n", keyboard_item[i], keyboard_cart[i], keyboard_cart[i] * keyboard_price[i]);
            }
        }

        // Display Headphone in the cart
        fprintf(fInvoice, "\nHeadphone:\n");
        for (int i = 0; i < MAX_ITEMS_HEADPHONE; i++)
        {
            if (headphone_cart[i] > 0)
            {
                fprintf(fInvoice, "\t%s - quantity: %d - total price: %d TK\n", headphone_item[i], headphone_cart[i], headphone_cart[i] * headphone_price[i]);
            }
        }

        // Display total price
        fprintf(fInvoice, "\n\n\tTotal price is: %d TK\n", total_price);
        print_func("Thanks for shopping. Your invoice is generated by your mobile number.");
        star_print();

        fclose(fInvoice);
    }
    else
    {
        print_func("Cart is empty!\n");
    }
}

// ***************************************//

void star_print()
{
    printf("\n\033[0;31m********************************************************\033[0m\n");
}

// \t\033[0;36m%s\033[0m

void print_func(const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    printf("\033[0;36m"); // Set text color to cyan
    vprintf(fmt, args);
    printf("\033[0m"); // Reset text color to default
    va_end(args);
}
