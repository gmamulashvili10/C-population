#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // TODO: Prompt for end size

    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (start > end);

    if (start == end)
    {
        printf("Years: 0");
    }

    // TODO: Calculate number of years until we reach threshold

    int Years = 0;
    do
    {
        start = start + (start / 3) - (start / 4);
        Years++;
    }
    while (start < end);
    // TODO: Print number of years
    printf("Years: %i\n", Years);
}
