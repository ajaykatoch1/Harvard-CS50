#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    float amt = get_float("Change owed: "); //gets user input

    while (amt < 0)
    {
        amt = get_float("Change owed: ");
    }
    //calculates q,d,n,p to get total coins
    int cents = round(amt * 100);
    int quarter = cents / 25;
    int q_rem = cents % 25;
    int dime = q_rem / 10;
    int d_rem = q_rem % 10;
    int nickel = d_rem / 5;
    int n_rem = d_rem % 5;
    int penny = n_rem / 1;

    int total_coins = quarter + dime + nickel + penny;

    printf("%i", total_coins); //prints total coins


}