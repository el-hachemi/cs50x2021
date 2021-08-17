#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<cs50.h>
#include<string.h>

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
      int key = atoi(k);
      // Prompting the user for the plain text
      string p = get_string("plaintext:  ");
      printf("ciphertext: ");
      int c;
      // Creating an array of uppercase alphabetics
      string upper;
      for (int u = 0; u < 26; u++)
      {
	     upper[u] = 65;
      } 
      // Creating an array of lowercase alphabetics
      string lower;
      for (int l = 0; l < 26; l++)
      {
	     lower[l] = 97;
      } 
      for (int j = 0, N = strlen(p); j < N; j++)
      {
	      if (isalpha(p[j]))
	      {
		  for (int u = 0; u < 26; u++)
		  {
			  if (p[j] == upper[u])
			  {
				  c = (upper[u] + key) % 26;
			  }
			  else if (p[j] == lower[u])
			  {
				  c = (lower[u] + key) % 26;
			  }
		  }
		  printf("%i", c);
	      }
	      else
	      {
		   printf("%i", p[j]); 
	      }
      }
      printf("\n");
  }
}
