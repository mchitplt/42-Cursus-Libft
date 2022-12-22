/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:02:59 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/22 19:26:27 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{   
    size_t  i;
    size_t  j;
    char *str;

    str = ((char *)malloc(sizeof(*s) * (len  + 1)));
    if (!str)
        return (0);
    i = 0;
    j = 0;
    while (s[i])
    {
        if (i >= start && j < len)
        {
            str[j] = s[i];
            j++;
        }
        i++;
    }
    str[j] = 0;
    return (str);
}
/*
int main()
{
    char a[] = "mucahit";

    printf ("%s\n", ft_substr(a, 2, 1));
}*/