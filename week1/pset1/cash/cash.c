#include <stdio.h>
#include <cs50.h>
#include <math.h>


float get_positive_float(void);

int main(void)
{ 
    float change = get_positive_float();
    int cents = round(change * 100);
    printf("Change owed: %.2f\n", change);
    int coins = 0;

    while (cents >= 25)
    {
        cents = cents - 25;
        coins++;
    }
    
    while (cents >= 10)
    {
        cents = cents - 10;
        coins++;
    }
    
    while (cents >= 5)
    {
        cents = cents - 5;
        coins++;
    }

    while (cents >= 1)
    {
        cents = cents - 1;
        coins++;
    }

    printf("coins: %i\n", coins);
}

// Prompt user for a positive float
float get_positive_float(void)
{
    float n; // If we declare n in the curly braces above it will known only in
    // this scope so I'll can't include it in the boolean expression or even
    // return it.
    do
    {
        n = get_float("Change owed: ");
    }
    while (n <= 0);
    return n;
}
