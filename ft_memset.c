/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:09:45 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/13 12:24:22 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void    *ft_memset(void *dst, int   c, size_t   n)
{
    unsigned    char    *d;

    d = (unsigned   char *) dst;

    while (n-- > 0)
    {
        *d++ = (unsigned    char) c;
    }
    return (dst);      
}

/*int main()
{
    char    a[] = "mucahit";
    ft_memset(a, 'p', 2);
    printf("%s", a);
}*/