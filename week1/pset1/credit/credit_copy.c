#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long number = get_long("Number: ");

    // Let's take every number by the modulo
    // Because the modulo of 10 gave us the last degit, I can have the next // degit by the adding multiplying the modulo by 10 to add a zero for each
    // iteration.
    
    int length;
    int d[length];
    int modulo = 10;

    // Calculating the length
    for (int i = 0; i != NUL; modulo *= modulo pow(i++))
    {
       length = i + 1;
       d[i] = long % modulo;
    }

    // Calculing the sum of the pair
    int sum_pair = 0;
    for (int j = 0; j != NULL; j += 2)
    {
        d[j] *= 2;
        sum_pair += d[j];
    }

    // Calculing the sum of the odd 
    int sum_odd = 0;
    for (int j = 1; j != NULL; j +=2)
    {
        sum_odd += d[j];
    }
    
