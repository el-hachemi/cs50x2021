// Variable Scope
// No side effect on foo.
#include <stdio.h>

int triple(int x);

int main(void)
{
    int foo = 4;
    triple(foo);
    printf("%i\n", foo);
    printf("%i\n", triple(foo));
}

int triple(int x)
{
    return x *= 3;
}
