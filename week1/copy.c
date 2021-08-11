#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *s = get_string("s: ");

	char *t = malloc(strlen(s) + 1);

	// Cette ligne est pour sortir du programme lorsqu\'il ya un prblème allocution de proramme si ou si jamais y a pas eu assez de memoire ce problème n\'est pas courant mais il existe.
	if (t == NULL)
	{
		return 1;
	}

	// Il existe une fonction pour faire une copie d'un string qui est déjà ecrite est c'est:
	// strcpy(t, s);
	// Si jamis j'utilise cette fonction j'aurais pas beson de faire une loop même pour le nul character \0.
	
	for (int i = 0, n = strlen(s); i <= n; i++)
	{
		t[i] = s[i];
	}
	
	// Cette ligne est la pour empecher de d\'allouer de la memoire a quelque chose de vide
	if (strlen(t) > 0);
	{
	t[0] = toupper(t[0]);
	}

	printf("s: %s\n", s);
	printf("t: %s\n", t);

	//A chaque fois que j'alloue de la memoire avec la fonction malloc il est impératif de la libérer avec la fonction free(), sinon elle restera allouer à jamais. d'où provient l'utilité de l'outil valgrind. Elle est à l'opposé de malloc car cette dernière nous donne l'adresse de la première quatre bytes donc free libereras cette adresse
	free(t);
}
