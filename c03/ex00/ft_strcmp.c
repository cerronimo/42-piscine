/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceyildir <ceyildir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 21:22:17 by ceyildir          #+#    #+#             */
/*   Updated: 2025/03/02 22:02:02 by ceyildir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    unsigned int    i;

    i = 0;
    while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

int main()
{
    printf("%d", ft_strcmp("Hello", "Hello1"));
    printf("\n%d", ft_strcmp("Hello", "He"));
    printf("\n%d", ft_strcmp("He", "Hello"));
    printf("\n%d", ft_strcmp("Hello", "Hello"));
}