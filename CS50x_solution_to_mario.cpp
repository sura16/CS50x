#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt the user for input value
    int n;

    do
    {
        n = get_int("Height: ");
    }
    while ((n < 1) || (n > 8));


    //Display the input value
    for (int i = 0; i < n; i++)
    {
        //loop Display's empty value
        for (int j = n - i; j > 1; j--)
        {
            printf(" ");
        }
        //loop Display's "#" value
        for (int k = i; k >= 0; k--)
        {
            printf("#");
        }
        //After finishing the above two inside for loop move to a new line
        printf("\n");
    }
}