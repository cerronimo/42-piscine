#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int range;
    int index;
    int *buffer;

    if (min >= max)
        return (0);
    range = max - min;
    buffer = (int *)malloc(range * sizeof(int));
    if (!buffer)
        return (0);
    index = 0;
    while (index < range)
    {
        buffer[index] = min + index;
        index++;
    }
    return (buffer);
}

int main(void)
{
    int min;
    int max;
    int *tab;
    int i = 0;
    int size;

    min = 5;
    max = 10;
    size = max - min;
    tab = ft_range(min, max);
    while (i < size)
    {
        printf("%d, ", tab[i]);
        i++;
    }
    free(tab);
    return 0;
}
