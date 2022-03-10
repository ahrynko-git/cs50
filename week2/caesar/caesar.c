#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string key = argv[1];
    int key_len = strlen(argv[1]);
    for (int i = 0; i < key_len; i++)
    {
        if (isdigit(key[i]) != 1)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int k = atoi(argv[1]);
    string plaintext = get_string("plaintext:  ");
    int plaintext_len = strlen(plaintext);

    printf("ciphertext: ");

    for (int i = 0; i < plaintext_len; i++)
    {
        if (islower(plaintext[i]) == 1)
        {
            printf("%c", ((plaintext[i] - 'a' + k) % 26 + 'a'));
        }
        else if (isupper(plaintext[i]) == 1)
        {
            printf("%c", ((plaintext[i] - 'A' + k) % 26 + 'A'));
        }
        else
            printf("%c", plaintext[i]);
    }
    printf("\n");

    return 0;
}
