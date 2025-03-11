#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        // Checks if the character isn't a number, if it isn't, return 0
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            return (0);
        }
        i++;
    }
    // If all characters are numbers, return 1
    return (1);
}

int main(void)
{
    char    *str1 = "1234567890";
    char    *str2 = "123456789o";

    printf("%s is numeric? %d\n", str1, ft_str_is_numeric(str1));
    printf("%s is numeric? %d\n", str2, ft_str_is_numeric(str2));
}