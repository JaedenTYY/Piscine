#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char c = 'z';
    while (c >= 'a')
    {
        write(1, &c, 1);
        c--;
    }
    write(1, "\n", 1); // Print newline for better output formatting
}

int main(void)
{
    ft_print_reverse_alphabet(); 
    return 0;
}

//gcc ft_print_reverse_alphabet.c -o reverse_alphabet ./reverse_alphabet