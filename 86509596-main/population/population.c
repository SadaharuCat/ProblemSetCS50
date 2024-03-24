#include <cs50.h>
#include <stdio.h>
int n;
int e;
int y;
int main(void)
{
    // TODO: Prompt for start size
    do
    {
        n = get_int("Start size: ");
    }
    while (n < 9);
    // TODO: Prompt for end size
    do
    {
        e = get_int("End size: ");
    }
    while (n >= e);
    // TODO: Calculate number of years until we reach threshold
    do
    {
        y = y + 1 ;
        n = n + (n / 3) - (n / 4);
    }
    while (n < e);

    // TODO: Print number of years
    printf("Years: %i",y);
}
