#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{


    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        exit(1);

    }

    for (int i = 0 ; i < argv[1][i] != '\0'; i++)
    {

        if (!isdigit(argv[1][i]))
        {

            printf("Usage: ./caesar key\n");
            exit(1);

        }
    }

    int result;


    int key = atoi(argv[1]);
    string p = get_string("plaintext:  ");
    printf("ciphertext: ");
    for (int j = 0; j < strlen(p); j++)
    {
        if (p[j] == 32)
        {
            printf(" ");
        }
        if (p[j] == 44)
        {
            printf(",");
        }
        if (p[j] == 33)
        {
            printf("!");
        }
        if (isalpha(p[j]))
        {
            if (islower(p[j]))
            {
                result = ((p[j] - 'a') + key) % 26 + 'a';
                printf("%c", result);
            }
            else
            {
                result = ((p[j] - 'A') + key) % 26 + 'A';
                printf("%c", result);
            }
        }
    }
    printf("\n");
}

