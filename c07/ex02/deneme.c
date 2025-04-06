/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerenyildirim <cerenyildirim@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 00:16:05 by cerenyildir       #+#    #+#             */
/*   Updated: 2025/03/10 00:17:39 by cerenyildir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	index;
	int	*buffer;

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
    int *tab;
    int size = ft_ultimate_range(&tab, 5, 10);

    for (int i = 0; i < size; i++)
        printf("%d, ", tab[i]);

    printf("\n%d\n", size);
    free(tab);
    return (0);
}
