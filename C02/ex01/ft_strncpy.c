#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    // Declare a variable to store the index
    unsigned int i;

    i = 0;

    // Copy the source string to the destination string
    while (src[i] != '\0' && i < n)
    {
        // Copy the character from the source string to the destination string
        dest[i] = src[i];
        i++;
    }

    // Add null characters to the end of the destination string
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

int main(void)
{
    char src[] = "Source"; // The source string
    char dest[] = "######"; // The destination string
    int n = 6; // The number of characters to copy

    printf("Before calling function: %s\n", dest);
    ft_strncpy(dest, src, n);
    printf("After calling function: %s\n", dest);
}