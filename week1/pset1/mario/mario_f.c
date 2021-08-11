#include <stdio.h>
#include <cs50.h>

int get_positive_int(void);

int main(void)
{
  int n = get_positive_int();
  printf("Scores: %i\n", n);

  for (int i = 0; i < n; i++)
      {
         // When I nested this loop into the j loop the results was false. 
          for (int z = 0; z <= n - i - 1; z++)
          {
              printf(" ");
          }

          for (int j = 0; j <= i; j++)
          {
              printf("#");
          }
          printf("\n");
      }
}

// Prompt user for a positive integer
int get_positive_int(void)
{
    int n;  // If we declare n in the curly braces above it will known only in
    // this scope so I'll can't include it in the boolean expression or even
    // return it.
    do
    {
        n = get_int("Height: ");
    }
    while (n > 8 || n < 1);
    return n;
}
