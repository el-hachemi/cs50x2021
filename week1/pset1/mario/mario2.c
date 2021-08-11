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
          // This loop allows me to add spaces so the piramyde will be right
          for (int j = 0; j <= i; j++)
          {
              printf("#");
          }
          // Now I need to add two spaces after every line
          for (int a = 0; a < 2; a++)
          {
              printf(" ");
          }
          // Now let's make the second helf of the pyramide
          for (int b = 0; b <= i; b++)
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
