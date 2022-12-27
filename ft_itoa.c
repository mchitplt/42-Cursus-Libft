/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:51:57 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/25 08:14:36 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

static size_t len_size(int n)
{
    size_t len;
    len = 0;
    if(n == 0)
        len ++;
    if(n < 0)
    {
        len++;
        n = -n;
    }
    while(n != 0)
    {
        n /= 10;
        len++;
    } 
    return (len);
}
char    *ft_itoa(int n)
{
    size_t  i;
    size_t  len;
    char    *a;

    i = 0;
    if (n == -2147483648)
        return (ft_strdup("-2147483648"));
    len = len_size(n);
    a = malloc((len + 1) * sizeof(char));
    if (!a)
        return (0);
    if (n < 0)
    {
        a[0] = 45;
        n *= - 1;
        i++;
    }
    a[len] = '\0';
    while (i < len--)
    {
        a[len] = (n % 10) + '0';
        n /= 10;
    }
    return (a);
}
/*
int	main(void)
{
    int a = -1234;
    printf("%s", ft_itoa(a));
}*/