#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *file = fopen("phonebook.csv", "a");
	if (file == NULL) // Just to be safe.
	{
		return 1;
	}

	char *name = get_string("Name: ");
	char *number = get_string("Number: ");

	// If I want to save the informations in a csv file
	fprintf(file, "%s,%s\n", name, number); // fprintf print to a file.

	fclose(file);
}
