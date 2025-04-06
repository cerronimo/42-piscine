#include <stdio.h>
int whitespaces(char *str , int *ptr_i)
{
    int count;
    int i;

    i=0;
    count=1;
    while((str[i]>= 9 && str[i] <=13) || str[i] == 32)
        i++;
    while((str[i] == 43 || str[i] == 45))
    {
        if (str[i] == 45)
                count *= -1;
        i++;
    }
    *ptr_i = i;
    return(count);
}

int ft_atoi(char *str)
{
    int sign;
    int result;
    int i;

    result = 0;
    sign = whitespaces(str, &i);
    while(str[i] && str[i] >= 48 && str[i] <= 57)
    {
        result *= sign;
        return(result);
    }
}

int main(void)
{
    char *s = "    ----+0123456789ab567";
    printf("%d", ft_atoi(s));
}