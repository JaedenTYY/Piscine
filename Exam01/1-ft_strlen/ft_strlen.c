#include <stdio.h>

// Deliver only this function
int ft_strlen(char *str)
{
    int i;
    i = 0;

    while (str[i])
        i++;
    
    return (i);
}

int main(void)
{
    char *str = "Whats Up, Gang";
    int length;

    length = ft_strlen(str);
    
}