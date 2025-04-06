/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerenyildirim <cerenyildirim@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 23:57:31 by cerenyildir       #+#    #+#             */
/*   Updated: 2025/03/10 00:03:04 by cerenyildir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;

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

int	main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	allocated = ft_strdup(str);
	printf("%s,%p",allocated, allocated);

	free(allocated);
	return 0;
}
