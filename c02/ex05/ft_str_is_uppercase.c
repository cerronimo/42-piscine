#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main()
{
    printf("%d", ft_str_is_uppercase("ABCDEFGH"));
    printf("\n%d", ft_str_is_uppercase("ABCDEFGHa"));
    printf("\n%d", ft_str_is_uppercase("-_134556ABCDEFGaH67"));
}