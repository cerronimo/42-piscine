/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerenyildirim <cerenyildirim@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 00:11:40 by cerenyildir       #+#    #+#             */
/*   Updated: 2025/03/10 00:14:33 by cerenyildir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	index;
	int	*buffer;

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
    int min=5;
    int max=10;
    int *tab;
    int i = 0;
    int range = max-min;

    tab = ft_range(min, max);
    while (i < range)
    {
        printf("%d, ", tab[i]);
        i++;
    }
    free(tab);
    return 0;
}