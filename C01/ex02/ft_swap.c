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
    int num1 = 42;
    int num2 = 24;
    int *a = &num1;
    int *b = &num2;

    printf("Before: a = %d, b = %d\n", num1, num2);
    ft_swap(a, b);
    printf("After: a = %d, b = %d\n", num1, num2);
    return (0);
}