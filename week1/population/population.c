#include "../../cs50.c"
#include <stdio.h>

int main(void)
{
    int start_size, end_size, years = 0;

    // TODO: Prompt for start size
    do
    {
        start_size = get_int("Start size: ");
    } while (start_size < 9);

    // TODO: Prompt for end size
    do
    {
        end_size = get_int("End size: ");
    } while (start_size > end_size);

    // TODO: Calculate number of years until we reach threshold
    do
    {
        start_size += start_size / 3 - start_size / 4;
        years++;
    } while (start_size < end_size);

    // TODO: Print number of years
    printf("Years: %i\n", years);
}
