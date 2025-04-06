/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceyildir <ceyildir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 03:23:17 by ceyildir          #+#    #+#             */
/*   Updated: 2025/02/23 03:24:23 by ceyildir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int	a;
	int	b;
	int	x;
	int	y;

	a = 10;
	b = 5;
	ft_div_mod(a, b, &x, &y);
	printf("%d\n", x);
	printf("%d", y);
}
