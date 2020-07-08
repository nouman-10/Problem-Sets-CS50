#include <stdio.h>
#include <cs50.h>
#include <math.h>


int get_cents(void);
int get_total_coins(int cents);

int main(void)
{
    int cents = get_cents();
    int total_coins = get_total_coins(cents);
    printf("%i\n", total_coins);
}


int get_cents(void)
{
    float change_owed;
    do
    {
        change_owed = get_float("Change owed: ");
    } while (change_owed < 0);

    int cents = round(change_owed * 100);
    return cents;
}

int get_total_coins(int cents)
{
    int total_coins = 0;
    while(cents != 0)
    {
        total_coins += 1;
        if (cents >= 25)
        {
            cents -= 25;
        }
        else if (cents >= 10)
        {
            cents -= 10;
        }
        else if (cents >= 5)
        {
            cents -= 5;
        }
        else
        {
            cents -= 1;
        }
    }
    return total_coins;
}
