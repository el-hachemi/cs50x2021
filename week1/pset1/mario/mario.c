#include <stdio.h>
#include <cs50.h>

int get_positive_int(void);

int main(void)
{
  int n = get_positive_int();
  printf("Scores: %i\n", n);

  for (int i = 0; i < n; i++)
      {
          for (int j = 0; j < i + 1; j++)
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
