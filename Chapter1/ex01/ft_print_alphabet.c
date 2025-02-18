#include <unistd.h>

void ft_print_alphabet(void)
{
    char c = 'a';
    while (c <= 'z')
    {
        write(1, &c, 1);
        c++;
    }
    write(1, "\n", 1); // Print newline for better output formatting
}

int main(void)
{
    ft_print_alphabet(); // Output: abcdefghijklmnopqrstuvwxyz
    return 0;
}
