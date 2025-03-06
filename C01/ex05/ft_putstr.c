#include <unistd.h>

void ft_putstr(char *str)
{
    int i;
    i = 0;

    while (str[i])
    {
        // Each character passed by the index "i" is printed
        write(1, &str[i], 1);
        i++;
    }
}

int main(void)
{
    char *str = "Hello, World!!!";
    ft_putstr(str);
    return (0);
}