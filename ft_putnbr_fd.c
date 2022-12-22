/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:25:38 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/20 18:00:26 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
        write (fd, "-2147483648", 11);
    else if (n < 0)
    {
        write (fd, "-", 1);
        ft_putnbr_fd(-n, fd);
    }
    else if (n > 9)
    {
        ft_putnbr_fd((n / 10), fd);
        ft_putnbr_fd((n % 10), fd);
    }
    else
    {
        char a;
        a = '0';
        n = a + n;
        write (fd, &n, 1);
    }

}