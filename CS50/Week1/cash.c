#include <cs50.h>
#include <stdio.h>

// Calculate the minimum coins needed.
void calculate(int total)
{
    int coins = 0;

    while (total >= 25)
    {
        coins = coins + 1;
        total = total - 25;
    }

    while (total >= 10)
    {
        coins = coins + 1;
        total = total - 10;
    }

    while (total >= 5)
    {
        coins = coins + 1;
        total = total - 5;
    }

    while (total >= 1)
    {
        coins = coins + 1;
        total = total - 1;
    }

    printf("%d\n", coins);
}

// Ask to the user to digit the change owed.
int main(void)
{
    int change;

    do
    {
        change = get_int("What is the change owed?");
    }
    while (change < 1);

    calculate(change);
}
