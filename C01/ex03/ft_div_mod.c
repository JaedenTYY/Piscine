#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b; 
}

int main(void)
{
    int a = 89;
    int b = 2;
    int n1 = 0;
    int n2 = 0;
    int *div = &n1;
    int *mod = &n2;
    printf("Before ft_div_mod:\n");
    printf("Pointer 'div' points to address %p, which has the value %d\n", div, *div);
    printf("Pointer 'mod' points to address %p, which has the value %d\n", mod, *mod);
    ft_div_mod(a, b, div, mod);
    printf("After ft_div_mod:\n");
    printf("Pointer 'div' points to address %p, which has the value %d\n", div, *div);
    printf("Pointer 'mod points to address %p, which has the value %d\n", mod, *mod);
    return (0);
}