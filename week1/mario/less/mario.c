#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("How height is the pyramid?");
    }
    while (height < 1 || height > 8);
    for (int r = 0; r < height; r++)
    {
        for (int c = 0; c < (height - r); c++)
        {
            printf(" ");
        }
        for (int c = 0; c < r + 1; c++)
        {
            printf("#");
        }
        printf("\n");
    }
}
