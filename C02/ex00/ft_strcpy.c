#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = src[i];
    return dest;
}

int main(void)
{
    char dest[] = "Destination";
    char src[] = "Source";

    printf("Destination before: %s\n", dest);
    ft_strcpy(dest, src);
    printf("Destination after: %s\n", dest);
    return 0;
}