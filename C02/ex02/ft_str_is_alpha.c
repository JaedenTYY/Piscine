#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        // Checks if the character isn't a letter, if it isn't, return 0
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
        {
            return (0);
        }
        i++;
    }
    // If all characters are letters, return 1
    return (1);
}

int main(void)
{
    char *str1 = "What d Signma";
    char *str2 = "WhatdSignma";
    
    printf("%s is alpha? %d\n", str1, ft_str_is_alpha(str1));
    printf("%s is alpha? %d\n", str2, ft_str_is_alpha(str2));
}