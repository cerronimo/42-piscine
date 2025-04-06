/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceyildir <ceyildir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 21:23:01 by ceyildir          #+#    #+#             */
/*   Updated: 2025/03/03 16:47:20 by ceyildir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    unsigned int dlen;
    unsigned int slen;

    i = 0;
    j = 0;
    while (dest[j] != '\0')
    {
        j++;
    }
    dlen = j;
    slen = ft_strlen(src);

    if (size == 0 || size <= dlen)
        return (slen + size);

    while (src[i] != '\0' && i < size - dlen - 1)
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dlen + slen);
}

int main(void)
{
    char src[] = "merhabaa ben c04 ";
    char dest[50] = "1232 54";
    printf("%i \n", ft_strlcat(dest, src, 0));
    printf("%s \n", dest);
}