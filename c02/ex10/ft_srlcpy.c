#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int x;

    x = ft_strlen(src);
    i = 0;
    if (size != 0)
    {
        while (src[i] != '\0' && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (x);
}

int main()
{
    char src[] = "World!";
    char dest[10] = "Hello ";
    printf("%d | %s", ft_strlcpy(dest, src, 10), dest);
}