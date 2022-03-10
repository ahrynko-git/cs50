#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int d13, d14, d15, d16, cur_digit, sum = 0;
    long card_number = get_long("Number: ");

    for (int i = 1; i <= 16; i++)
    {
        cur_digit = card_number % 10;

        if (i == 13) d13 = cur_digit;
        if (i == 14) d14 = cur_digit;
        if (i == 15) d15 = cur_digit;
        if (i == 16) d16 = cur_digit;

        if (i % 2 == 0)
        {
            cur_digit *= 2;

            if (cur_digit > 9)
                sum += cur_digit / 10 + cur_digit % 10;
            else
                sum += cur_digit;
        }
        else
            sum += cur_digit;

        card_number /= 10;
    }

    if (sum % 10 == 0)
    {
        if (d13 == 4 || d16 == 4)
            printf("VISA\n");
        else if (d15 == 3 && (d14 == 4 || d14 == 7))
            printf("AMEX\n");
        else if (d16 == 5 && d15 >= 1 && d15 <= 5)
            printf("MASTERCARD\n");
        else
            printf("INVALID\n");
    }
    else
        printf("INVALID\n");

    return 0;
}
