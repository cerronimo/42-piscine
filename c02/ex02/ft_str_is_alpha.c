#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    if (str[i] == '\0')
    {
        return (1);
    }
    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z')
            || (str[i] >= 'a' && str[i] <= 'z'))
            i++;
        else
            return (0);
    }
    return (1);
}

int main()
{
    printf("%d", ft_str_is_alpha("abcdefghijk"));
    printf("\n%d", ft_str_is_alpha("abc1defghijk1"));
    printf("\n%d", ft_str_is_alpha("-134556efghij67"));
}