#include<stdio.h>
#include<string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    
    i = 0;
    while(src[i] != '\0' && i < n)
    {
        dest[i]= src[i];
        i++;
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);

}

int main()
{
    char src[] = "hello";
    char dest[] = "world1";
    char dest1[] = "world2";

    printf("%s\n", ft_strncpy(dest, src, 3));
    printf("%s\n", ft_strncpy(dest1, src, 3));
    printf("%s\n", ft_strncpy(dest, src, 5));
    printf("%s\n", ft_strncpy(dest1, src, 5));
    printf("%s\n", ft_strncpy(dest, src, 7));
    printf("%s", ft_strncpy(dest1, src, 7));
}