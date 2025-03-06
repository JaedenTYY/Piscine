#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = (*a / *b);
    mod = (*a % *b);
    *a = div;
    *b = mod;
}

int main(void)
{
    int n1 = 27;
    int n2 = 4;
    int *a = &n1;
    int *b = &n2;

    printf("Before ft_ultimate_div_mod:\n");
    printf("Pointer 'a' points to address %p with value %d\n", a, *a);
    printf("Pointer 'b' points to address %p with value %d\n", b, *b);
    ft_ultimate_div_mod(a, b);
    printf("\n");
    printf("After ft_ultimate_div_mod:\n");
    printf("Pointer 'a' points to address %p but now with div value %d\n", a, *a);
    printf("Pointer 'b' points to address %p but now with mod value %d\n", b, *b);
    return (0);
}