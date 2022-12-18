/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:18:07 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/17 23:00:54 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t  n, size_t   s)
{
    void    *str;

    str = malloc(n * s);
    if (!str)
        return (str);
    ft_bzero(str,(n * s));
    return (str);   
}
/*
int main()
{
    int *a;
    a = malloc(3 * sizeof(int));
    *a = 3;
    *(a + 1) = 4;
    *(a + 2) = 7;
    printf("%d\n", *a);
    printf("%d\n", *(a + 1));
    printf("%d\n", *(a + 2));
    a = calloc(3, sizeof(int));
    printf("%d\n", *a);
    printf("%d\n", *(a + 1));
    printf("%d\n", *(a + 2));
}*/