#include <stdio.h>
#include "../../cs50.h"

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
<<<<<<< HEAD
            printf(j < height - i - 1 ? " " : "#");
=======
            printf(j < n ? ' ' : '#')
>>>>>>> 704d206... refactoring

        printf("  ");

        for (int j = 0; j < height; j++)
            printf(j <= i ? "#" : " ");

        printf("\n");
    }
}
