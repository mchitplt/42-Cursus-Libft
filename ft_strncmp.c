/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 01:04:04 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/17 14:01:36 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned    char *a;
    unsigned    char *b;

    a = (unsigned   char *) s1;
    b = (unsigned   char *) s2;
    while (n-- && (*a || *b))
    {
        if (*a != *b)
            return (*a - *b);
        a++;
        b++;
    }
    return (0);
}