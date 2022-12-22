/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:48:50 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/19 23:16:31 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}
/*
int main()
{
    int fd = open("tog.txt", O_WRONLY | O_CREAT, 0777);
    ft_putchar_fd('a',fd);
    printf("fd = %d\n",fd);

    if (fd == - 1)
    {
        printf("error %d\n", errno);
        perror ("program");
    }
    return (0);
}*/