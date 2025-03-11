#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main(void)
{
    char    *str1 = "abcdefghijklmnopqrstuvwxyz";
    char    *str2 = "abcdefghijklmnopqrstuvwxyzA";

    printf("%s is lowercase? %d\n", str1, ft_str_is_lowercase(str1));
    printf("%s is lowercase? %d\n", str2, ft_str_is_lowercase(str2));
}