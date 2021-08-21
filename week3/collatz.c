#include <stdio.h>
#include <cs50.h>

int collatz(int x);
int steps = 0;

int main(void)
{
    int n = get_int("Positive number: ");
    printf("There are %i steps to get back to 1\n", collatz(n));
}

int collatz(int x)
{
    // the base case:
    if (x == 1)
        return steps;

    // The recursive cases
    else if (x % 2 == 0)
    {
        x /= 2;
        steps++;
        collatz(x);
    }
    else
    {
        x = 3 * x + 1;
        steps++;
        collatz(x);
    }
}

// The answer from the video is:
//
// int collatz(n)
// {
//  if(n == 1)
//    return 0;
//
//  else if ((n % 2) == 0)
//    return 1 + collatz(n/2);
//
//  else
//    return 1 + collatz(3*n + 1);
//}
