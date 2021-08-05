#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask for start size of the population

    int startSize;

    do
    {
        startSize = get_int("Start size: ");


    }
    while (startSize < 9);


    // Ask for end size of the population

    int endSize;

    do
    {
        endSize = get_int("End size: ");

    }
    while (endSize < startSize);



    // Calculate number of years until we reach threshold

    int years = 0;
    int population = startSize;
    int removed = 0;
    int added = 0;

    while (population < endSize)
    {
        removed = population / 4;
        added = population / 3;
        population = population + added - removed;
        years++;

    }

    // Print number of years

    printf("Years: %d\n", years);

}