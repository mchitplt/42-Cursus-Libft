/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 23:56:00 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/20 17:19:29 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    if (!s)
        return;
    while (s[i])
    {
        write (fd, &s[i], 1);
        i++;
    }
    
}
/*
int main()
{
    int fd = open("tog.txt", O_WRONLY | O_CREAT, 0777);
    ft_putchar_fd('s',fd);
    printf("fd = %d\n",fd);

    if (fd == - 1)
    {
        printf("error %d\n", errno);
        perror ("program");
    }
    return (0);
}*/