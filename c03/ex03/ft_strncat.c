/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceyildir <ceyildir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 21:22:45 by ceyildir          #+#    #+#             */
/*   Updated: 2025/03/03 12:38:13 by ceyildir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (j < nb && src[j] != '\0')
    {
        dest[i+j] = src[j];
        j++;
    }
    dest[i+j] = '\0';
    return (dest);
}

int main()
{
    char src[] = "Network";
    char dest[] = "42 ";
    printf("%s", ft_strncat(dest, src, 3));
}