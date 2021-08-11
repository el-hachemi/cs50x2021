#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
	int x = 1;
	int y = 2;

	printf("x is %i, y is %i\n", x, y);
	printf("the pointer of x is %p\n", &x);
	swap(&x, &y);
	printf("x is %i, y is %i\n", x, y);
	printf("the pointer of x is %p\n", &x);
}

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
