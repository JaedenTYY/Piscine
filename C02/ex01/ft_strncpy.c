#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

int main(void)
{
    char src[] = "Source";
    char dest[] = "######";
    int n = 6;

    printf("Before calling function: %s\n", dest);
    ft_strncpy(dest, src, n);
    printf("After calling function: %s\n", dest);
}