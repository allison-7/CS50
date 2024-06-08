#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// c_i = (p_i + k) % 26
char rotate(char c, int n);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Improper command-line argument\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Improper command-line argument\n");
            return 1;
        }
    }
    // key
    int key = atoi(argv[1]);
    string plaintext = get_string("plaintext:  ");
    string ciphertext = plaintext;
    for (int i = 0; i < strlen(ciphertext); i++)
    {
        ciphertext[i] = rotate(ciphertext[i], key);
    }

    printf("ciphertext: %s\n", ciphertext);
    return 0;
}

// c_i = (p_i + k) % 26
char rotate(char c, int n)
{
    if (islower(c))
    {
        c = (c - 'a' + n) % 26 + 'a';
    }
    if (isupper(c))
    {
        c = (c - 'A' + n) % 26 + 'A';
    }
    return c;
}
