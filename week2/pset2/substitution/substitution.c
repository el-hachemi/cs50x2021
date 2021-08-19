#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main(int argc, string argv[])
{
   if (argc == 1)  // If there's no an argument
   {
        printf("Usage: ./substitution KEY\n");
        return 1;
   }
   else if (argc > 2)  // If there's more than one argument
   {
       printf("Error: Only one argument is required\n");
       return 1;
   }
   else  // When there's only one argument
   {
     int length = strlen(argv[1]);
       if (length != 26) // Checking if the length of the argument equal 26
       {
           printf("Error: Key must contain 26 characters.\n");
           return 1;
       }
       else  // When there's one argument with length of 26. 
       {
           for (int i = 0, n = length; i < n; i++)         
           {
               if (!isalpha(k(i))) // If any char isn't alphabetic
               {
                   printf("Key must only contain alphabetic characters\n");
                   return 1;
               }
               for (int j = 0; j < n ; j++)                  
               {
                  if (i != j && k[j] == k[i]) // If the same char is reapeat.
                  {
                    printf("Key must not contain repeated characters.\n");
                    return 1;
                  }
               } 
           }
       }
   }
   
string k = argv[1];
      
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
