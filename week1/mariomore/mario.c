#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, n;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        n = height - i - 1;
        for (int j = 0; j < height; j++)
            j < n ? printf(" ") : printf("#");

        printf("  ");

        for (int j = 0; j < height; j++)
            j <= i ? printf("#") : printf(" ");

        printf("\n");
    }
}
