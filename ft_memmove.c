/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:34:32 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/13 12:24:14 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void    *ft_memmove(void    *dst, const void    *src, size_t n)
{
    unsigned    char *a;
    const   unsigned    char *b;

    if (dst == src)
    {
        return (dst);
    }
    else if (dst < src)
    {
        dst = ft_memcpy(dst,src,n);
    }
    else
    {
        a = (unsigned   char *) dst;
        b = (unsigned   char *) src;
        while (n--)
        {
            a[n] = b[n];
        }
    }
    return (dst);
}

/*int main()
{
    char    a[] = "mustafa";
    char    b[] = "mustaf";

    ft_memmove(a,b,7);
    printf("%s", a);
}*/