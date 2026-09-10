#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // Prompt user for pyramid height between 1 and 8
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Build the pyramid line by line
    for (int i = 0; i < height; i++)
    {
        // Print spaces before left hashtags
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // Print left hashtags
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        // Print middle gap
        printf("  ");

        // Print right hashtags
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }
}