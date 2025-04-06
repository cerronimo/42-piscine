#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int bound;
    int index;
    int *buffer;

    if (min >= max)
    {
        *range = 0;
        return (0);
    }
    bound = max - min;
    buffer = (int *)malloc(bound * sizeof(int));
    if (!buffer)
    {
        *range = 0;
        return (-1);
    }
    *range = buffer;
    index = 0;
    while (index < bound)
    {
        buffer[index] = min + index;
        index++;
    }
    return (bound);
}

int main(void)
{
    int min=5;
    int max=10;
    int *tab;
    int size;
    int i = 0;

    size = ft_ultimate_range(&tab, min, max);
    while (i < size)
    {
        printf("%d, ", tab[i]);
        i++;
    }

    printf("\n%d", size);
    free(tab);
    return 0;
}
