#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main()
{
    printf("%d", ft_str_is_lowercase("abcdefghijk"));
    printf("\n%d", ft_str_is_lowercase("abcAdefghijk1"));
    printf("\n%d", ft_str_is_lowercase("-_134556efgShgj67"));
}