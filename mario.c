#include <stdio.h>
#include <cs50.h>

int get_int_between_1_and_8(void);
void build_adjacent_pyramids(int height);

int main(void)
{
    int height = get_int_between_1_and_8();
    build_adjacent_pyramids(height);
}



int get_int_between_1_and_8(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    return height;
}


void build_adjacent_pyramids(int height)
{
    for(int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}
