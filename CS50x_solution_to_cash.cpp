#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{

    //Prompt the user for input
    float dollar;
    do
    {
        dollar = get_float("Change Owed: ");
    }
    while (dollar <= 0);

    //Change the input value to integer
    int cent = round(dollar * 100);

    //Different value of cent
    int quarter = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;
    int count = 0;

    //compute the input value
    while (cent >= 25)
    {
        cent -= quarter;
        count++;
    }
    while (cent >= 10)
    {
        cent -= dimes;
        count++;

    }
    while (cent >= 5)
    {
        cent -= nickels;
        count++;

    }
    while (cent >= 1)
    {
        cent -= pennies;
        count++;

    }

    //Display number of cent needed for change
    printf("%i\n", count);
}

