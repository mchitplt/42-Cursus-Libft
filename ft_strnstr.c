/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:33:16 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/21 23:49:44 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

char    *ft_strnstr(const char *dst, const char *src, size_t n)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (!dst && !n)
        return (NULL);
    if ((ft_strlen(src) == 0))
        return ((char *)dst);
    if (ft_strlen(dst) == 0)
        return (0);
    while (i < n)
    {
        while (dst[i + j] == src[j] && (i + j) < n)
        {
            if (src[j + 1] == '\0')
                return ((char *)dst + i);
            j++;
        }
        i++;
    }
    return (0);
}
/*
int main()
{
    char a[] = "mucahit";
    char b[] = "ca";
    size_t n = 4;
    char    *snc = ft_strnstr(a,b,n);
    printf("%s",snc);
}*/