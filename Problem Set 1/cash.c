#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int change = 0;
    do
    {
        change = get_int("Change Owed: ");
    }
    while (change < 1);

    int n_coins = 0;
    // quarters
    int tmp = change / 25;
    n_coins = tmp;
    int remainder = change % 25;
    if (remainder != 0)
    {
        // dimes
        tmp = remainder / 10;
        n_coins += tmp;
        remainder = remainder % 10;
        if (remainder != 0)
        {
            // nickels
            tmp = remainder / 5;
            n_coins += tmp;
            remainder = remainder % 5;
            if (remainder != 0)
            {
                // pennies
                n_coins += remainder;
                printf("%d\n", n_coins);
                exit(0);
            }
            else
            {
                printf("%d\n", n_coins);
                exit(0);
            }
        }
        else
        {
            printf("%d\n", n_coins);
            exit(0);
        }
    }
    else
    {
        printf("%d\n", n_coins);
    }
}
