/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceyildir <ceyildir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 21:22:52 by ceyildir          #+#    #+#             */
/*   Updated: 2025/03/03 16:26:14 by ceyildir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (to_find[j] == '\0')
        return (str);
    while (str[i] != '\0')
    {
        while (str[i + j] == to_find[j] && str[i + j] != '\0')
            j++;
        if (to_find[j] == '\0')
            return (str + i);
        i++;
        j = 0;
    }
    return (0);
}

int main()
{
    char str[] = "merhaba havuz eğitimi c04 projesi";
    char find[] = "havuz";
    printf("%s", ft_strstr(str, find));
}