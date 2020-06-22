#include <stdio.h>
#include <cs50.h>

int main(void)
{

    string name = get_string("what is your name? \n"); // This vraible is of type string and gets the user's name
    printf("hello, %s \n", name); // prints out hello, users name
}