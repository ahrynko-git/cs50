#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

const int KEY_LEN = 26;

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    if (strlen(argv[1]) != KEY_LEN)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    char key[KEY_LEN];

    for (int i = 0; i < KEY_LEN; i++)
    {
        if (isalpha(argv[1][i]) != 1)
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }

        key[i] = tolower(argv[1][i]);

        for (int j = i + 1; j < KEY_LEN; j++)
        {
            if (key[i] == tolower(argv[1][j]))
            {
                printf("Key must contain 26 characters.\n");
                return 1;
            }
        }
    }

    string plaintext = get_string("plaintext:  ");
    int plaintext_len = strlen(plaintext);

    printf("ciphertext: ");

    for (int i = 0; i < plaintext_len; i++)
    {
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i]))
                printf("%c", key[plaintext[i] - 'A'] - ('a' - 'A'));
            if (islower(plaintext[i]))
                printf("%c", key[plaintext[i] - 'a']);
        }
        else
            printf("%c", plaintext[i]);
    }
    printf("\n");

    return 0;
}