#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main(int argc, string argv[])
{
  // When there's no an argument
  if (argc == 1)
  {
      printf("Error: Enter an argument after ./caesar\n");
      return 1;
  }
  // When there's more than one argument
  else if (argc > 2)
  {
      printf("Error: Only one argument is required\n");
      return 1;
  }
  // When there's only one argument
  else 
  {
      string k = argv[1];
      // Checking if any element of the string isn't a decimal number
      for (int i = 0, n = strlen(k); i < n; i++)
      {
          if ((int) k[i] < 48 || (int) k[i] > 57) 
          {
              printf("Usage: ./caesar key\n");
              return 1;
          }
      }
      // Converting the decimal string to integer as it is
      int key = atoi(k);
      
      // Prompting the user for the plain text
      string p = get_string("plaintext:  ");
      printf("ciphertext: ");
      // Initializing a cipher char (string is not necessary)
      int c;      
      for (int j = 0, N = strlen(p); j < N; j++)
      {
          if (p[j] > 64 && p[j] < 91)
          {
               p[j] = p[j] - 65;
               c = (p[j] + key) % 26;
               c = c + 65;
          }
          else if (p[j] > 96 && p[j] < 123)
          {
                p[j] = p[j] - 97;
                c = (p[j] + key) % 26;
                c = c + 97;
          }
          else
          {
              c = p[j];
          }
          printf("%c", c);
      }
      printf("\n");
      return 0;
  }
}
