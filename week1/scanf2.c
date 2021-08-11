#include <stdio.h>
int main(void)
{
//	char *s;    Ce code ne peux pas marcher car je n'est pas declarer ma variable (garbage value) j'ai juste declarer un pointer.
//
//	J'ai le choix entre utilser malloc() avec char *s = malloc(4) et j'aurais par cosequant de l'espace dans la memoire "heap" et dont je doit impérativement librer avec free() s.
//	
//	Ou de declarer la variable sous forme d'un ARRAY avec char s[4] et avoir de la memoire du coté de STACK en bas. C'est bien parceque je n'est pas à appeler la fonction free(), mais demeure un mauvais choix car je ne peux pas avoir plus de trois characters avec le NUL charcter \0.
//	
//	Donc pour David la meilleure solution est d'avoir cs50 library, ce que je ne pense pas que c'est necessaire.
//
	printf("s: ");
	scanf("%s", s);
	printf("s: %s\n", s);
}
