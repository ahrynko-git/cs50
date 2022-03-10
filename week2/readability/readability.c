#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int result;
    int letters =0;
    int words = 0;
    int sentences = 0;
    float grade = 0;

    string text = get_string("Text: ");
    int text_len = strlen(text);

    for (int i = 0; i < text_len; i++)
    {
        if (isalpha(text[i]))
            letters++;
        if (text[i] == ' ')
            words++;
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
            sentences++;
    }
    words++;

    grade = 0.0588 * ((letters * 100) / words) - 0.296 * ((sentences * 100) / words) - 15.8;
    result = round(grade);

    if (result < 1)
        printf("Before Grade 1\n");
    else if (result >= 16)
        printf("Grade 16+\n");
    else
        printf("Grade %i\n", result);

    return 0;
}
