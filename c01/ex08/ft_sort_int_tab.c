/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceyildir <ceyildir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 03:47:59 by ceyildir          #+#    #+#             */
/*   Updated: 2025/02/23 03:55:04 by ceyildir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab [i +1] = swap;
			}
			i++;
		}
		size--;
	}	
}

int	main(void)
{
	int tab[6]={1,6,4,2,3,5};
	int size = 6;

	ft_sort_int_tab(tab, size);
	printf("{%d, %d, %d, %d, %d, %d}\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}
