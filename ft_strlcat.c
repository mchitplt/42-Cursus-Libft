/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:01:43 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/17 14:03:36 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t   s)
{
    size_t  i;
    size_t  j;

    j = ft_strlen(src);
    if (!s && !dst)
        return (0);
    if ((i = ft_strlen(dst)) >= s)
    {
        i = s;
        return (s + j);
    }
    if (j < s - i)
    {
        ft_memcpy(dst + i, src, j);
        dst[i + j] = '\0';
    }
    else
    {
        ft_memcpy(dst + i,src,s - i - 1);
        dst[s - 1] = '\0';
    }
    return (i + j);
}
/*
int main()
{
    char    dst[] = "mucahit";
    char    src[] = "sinem";
    size_t  s = 12;
    printf("%d", ft_strlcat(dst,src,s));

}*/