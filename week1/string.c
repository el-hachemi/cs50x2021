#include <string.h>
#include <stdio.h>
#include <cs50.h>

int main(void)
{
	string s = get_string("Inpt: ");
	printf("Output: ");
	for (int i = 0; i < strlen(s); i++)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
