#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_str_length(char *str)
{
    int index = 0;
    while (str[index])
        index++;
    return (index);
}

char *ft_strdup(char *src)
{
    int index;
    char *dest;

    index = 0;
    dest = (char *)malloc((ft_str_length(src) + 1) * sizeof(char));
    if (!dest)
        return (0);
    while (src[index])
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return (dest);
}

int main(void)
{
    char *str;
    char *allocated;

    str = "Hello World with malloc()";
    printf("original  : base  : %s @ %p\n", str, str);
    allocated = strdup(str);
    printf("copied    : alloc : %s @ %p\n", allocated, allocated);
    allocated = ft_strdup(str);
    printf("ft_copied : alloc : %s @ %p\n", allocated, allocated);

    free(allocated);
    return 0;
}
