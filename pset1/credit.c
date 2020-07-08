#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long number = get_long("Number: ");
    int counter = 0;
    int multiplied_by_2_sum = 0;
    int not_multiplied_by_2_sum = 0;
    int digit = 0;
    int second_digit;

    while (number != 0)
    {
        second_digit = digit;
        digit = number % 10;
        number = number / 10;

        if (counter % 2 == 1)
        {
            int twice_digit = digit * 2;

            if (twice_digit > 9)
            {
                int unit_digit = twice_digit % 10;
                int tens_digit = twice_digit / 10;
                multiplied_by_2_sum += unit_digit + tens_digit;
            }
            else
            {
                multiplied_by_2_sum += twice_digit;
            }
        }
        else
        {
            not_multiplied_by_2_sum += digit;
        }

        counter += 1;
    }

    int total_sum = multiplied_by_2_sum + not_multiplied_by_2_sum;

    if (total_sum % 10 != 0 || counter < 13 || counter  > 16)
    {
        printf("INVALID\n");
    }
    else
    {
        if (digit == 3 && (second_digit == 4 || second_digit == 7))
        {
            printf("AMEX\n");
        }
        else if (digit == 5 && (second_digit == 1 || second_digit == 2 || second_digit == 3 || second_digit == 4 || second_digit == 5))
        {
            printf("MASTERCARD\n");
        }
        else if (digit == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

}
