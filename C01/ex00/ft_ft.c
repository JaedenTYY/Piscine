#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main()
{
    int n = 1;
    int *nbr = &n;
    printf("Before: %d\n", n);
    ft_ft(nbr);
    printf("After: %d\n", n);
}