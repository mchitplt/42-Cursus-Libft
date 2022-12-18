/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:38:12 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/17 16:01:45 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

int ft_atoi(const   char    *str)
{
    int j;
    int k;

    j = 0;
    k = 1;
    while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
                    || *str == '\r' || *str == '\f')
                    str++;
    if (*str == 43 || *str == 45)
    {
        if (*str == 45)
             k *= -1;
        str++;
    }
    while (*str >= 48 && *str <= 57)
    {
        j *= 10;
        j += (*str - '0');
        str++;
    }
    if (k == - 1)
        j = - j;
    return (j);
}