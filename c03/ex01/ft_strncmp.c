/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceyildir <ceyildir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 21:22:26 by ceyildir          #+#    #+#             */
/*   Updated: 2025/03/03 17:14:14 by ceyildir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
    {
        if (s1[i] > s2[i])
        {
            return (1);
        }
        else if (s1[i] < s2[i])
        {
            return (-1);
        }
        i++;
    }
    return (0);
}

int main()
{
    printf("%d\n", ft_strncmp("Hello", "HelloWorld", 8));
    printf("%d\n", ft_strncmp("Hello", "HelloWorld", 5));
    printf("%d\n", ft_strncmp("Hello", "HelloWorld", 3));
    printf("%d\n", ft_strncmp("Hello", "HelloWorld", 6));
    printf("%d\n", strncmp("Hello", "HelloqWorld", 6));   
}