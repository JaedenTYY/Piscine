#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int main(void)
{
    char *str = "Whatsupp Gang";
    int length;

    length = ft_strlen(str);
    printf("String: %s\n Length: %d\n", str, length);
    return (0);
}