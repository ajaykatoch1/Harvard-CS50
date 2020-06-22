#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int pyrNum = get_int("Height: "); //get height from user

    while ((pyrNum <= 0 || pyrNum > 8))
    {
        //make sure input is 1-8

        pyrNum = get_int("Height: ");

    }

    if (pyrNum > 0 && pyrNum <= 8)
    {

        for (int i = 0; i < pyrNum; i++)
        {
            //create new lines for each row

            //printf("\n");

            for (int j = 0; j < (pyrNum - 1) - i; j++)
            {
                //prints out spaced

                printf(" ");

            }

            for (int k = 0; k < pyrNum - (pyrNum - 1 - i); k++)
            {
                //prints out pyramid stars

                printf("#");

            }

            printf("\n");
        }

    }

}
