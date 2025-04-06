#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(0);
}

int main()
{
    char src[] = "ceren";
    char src1[] = "ceren";
    char dest[] = "wo";
    char dest1[] = "wo";
    printf("%s", ft_strcpy(dest, src));
    printf("\n%s" , strcpy(dest1, src1));
}