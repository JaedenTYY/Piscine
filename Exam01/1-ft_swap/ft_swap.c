#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a;
    int b;

    a = 19;
    b = 42;
    printf("Before function\na: %d\nb: %d\n", a, b);
    ft_swap(&a, &b);
    printf("\nAfter function\n");
    printf("a: %d\nb: %d\n", a, b);
}