#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    long number, number_unchanged;
    int total_sum = 0, pos = 0, total_length = 0; 
    
    do
    {
        number = get_long("Number: ");
        number_unchanged = number;
        
        while (number != 0) {
            if (pos % 2 != 0) { // Every other degit
                int temp = 2 * (number % 10);
                if (temp > 9) {
                    total_sum += temp / 10 + temp % 10;
                } else {
                    total_sum += temp;
                }
            } else {
                total_sum += number % 10;
            }
            number = number / 10;
            pos++;
            total_length++; 
        }
    }

    while (number != 0);
    
    int start_number = number_unchanged / (long) pow(10,total_length - 2);
    if (total_sum % 10 == 0) // Might be valid
    {   // American Express uses 15-degit numbers; Starts with 34 or 37
        // MasterCard uses 16-degit nummbers; starts with 51 ,52 ,53 ,54 ,55
        // Visa uses 13 and 16-degit numbers; starts with 4
        if ((start_number == 34 || start_number == 37) && total_length == 15)
        {
            printf("AMEX\n");            
            return 0 ;
        }
        if ((start_number >= 51 && start_number <= 55) && total_length == 16)
        {
            printf("MASTERCARD\n");
            return 0;
        }
        if (start_number / 10 == 4 && (total_length == 13 || total_length == 16))
        {
            printf("VISA\n");
            return 0;
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

