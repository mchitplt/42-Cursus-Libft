/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:02:59 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/24 18:42:42 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{   
    size_t  i;
    size_t  j;
    char *str;
    i = 0;
    j = 0;

    if (!s)
        return (0);
    if (start >= ft_strlen(s))
        len = 0;
    if (len > ft_strlen(s + start))
        len = ft_strlen(s + start);
    str = ((char *)malloc(sizeof(*s) * (len  + 1)));
    if (!str)
        return (0);
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