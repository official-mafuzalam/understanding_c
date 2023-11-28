#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "NewMonalisha";
    char sub_string[] = "Mona";

    int length = strlen(string);
    int sub_str_length = strlen(sub_string);
    int sub_str_index = 0;

    for (int i = 0; i < length; i++)
    {
        if (string[i] == sub_string[sub_str_index])
        {
            sub_str_index++;

            if (sub_str_index == sub_str_length)
            {
                printf("Substring found at index %d\n", i - sub_str_length + 1);
                break;
            }
        }
        else
        {
            sub_str_index = 0;
        }
    }

    if (sub_str_index != sub_str_length)
    {
        printf("Substring not found\n");
    }

    return 0;
}
