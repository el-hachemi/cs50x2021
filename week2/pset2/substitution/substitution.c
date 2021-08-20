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
               if (!isalpha(argv[1][i])) // If any char isn't alphabetic
               {
                   printf("Key must only contain alphabetic characters\n");
                   return 1;
               }
               for (int j = 0; j < n ; j++)                  
               {
                  if (i != j && argv[1][j] == argv[1][i]) // If the same char is reapeated.
                  {
                    printf("Key must not contain repeated characters.\n");
                    return 1;
                  }
               } 
           }
       }
   }
   
    int k; 
    int key[26];  // Validating the key as "key" variable
    for (int i = 0; i < 26; i++)
    {
        argv[1][i] = toupper(argv[1][i]);
        k = (argv[1][i] + 65) % 26;
        key[i] = k;
        printf("%i\n", key[i]);
    }
    
    // Prompting the user for the plain text
    string plain = get_string("plaintext:  ");
    int p[] = plain;
    printf("ciphertext: ");

    // Initializing a cipher char (string is not necessary)
    int c;      
    for (int j = 0, n = strlen(plain); j < n; j++)
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

