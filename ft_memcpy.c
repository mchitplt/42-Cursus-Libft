/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:30:39 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/13 12:38:00 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void    *ft_memcpy(void *dst, const void    *src, size_t    n)
{
    unsigned    char    *d;
    unsigned    char    *c;

    d = (unsigned   char    *)dst;
    c = (unsigned   char    *)src;

    if (n == 0 || d == c)
    {
        return (dst);
    }

    while (n-- > 0)
    {
        *d = *c;
        d++;
        c++;
    }
    return  (dst);
}

/*int main(void)
{
    char    a[] = "mustafa";
    char    b[] = "mucahit";

    ft_memcpy(a,b,0);
    printf("%s", a);
}*/