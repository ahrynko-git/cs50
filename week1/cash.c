#include <stdio.h>
#include <math.h>
#include "../cs50.h"

int main(void)
{
    float dollars;
    int cents;
    int change_coins = 0;

    do
    {
        dollars = get_float("Change owed: ");
    } while (dollars < 0);

    cents = round(dollars * 100);

    change_coins += cents / 25;
    cents %= 25;
    change_coins += cents / 10;
    cents %= 10;
    change_coins += cents / 5;

    printf("%i\n", change_coins + cents % 5);

    return 0;
}
