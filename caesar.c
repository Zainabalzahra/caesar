#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//Make sure program runs in just one command-line argument

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage ./caesar key");
        return 1;
    }

//Make sure the chars in argv[1] are digits

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage ./caesar key");
            return 1;
        }
    }

//Convert argv[1] from string to int

    int k = atoi(argv[1]);

//Prompt the user for plain text

    string plaintext = get_string("Plaintext: ");
    printf("Ciphertext: ");

//If 'j' is smaller than the length of the string add

    for (int j = 0; j < strlen(plaintext); j++)
    {
//If its uppercase add 65(ascii)

        if (isupper(plaintext[j]))
        {
            printf("%c", (plaintext[j] - 65 + k) % 26 + 65);
        }

//If its lowercase ass 97(ascii)

        else if (islower(plaintext[j]))
        {
            printf("%c", (plaintext[j] - 97 + k) % 26 + 97);
        }

//If none then just keep as it is

        else
        {
            printf("%c", plaintext[j]);
        }

    }
    printf("\n");
}


