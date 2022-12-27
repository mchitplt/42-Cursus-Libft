/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 23:24:49 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/27 23:32:36 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    size_t i;
    if (!s)
        return ;
    
    i = 0;
    while (i < ft_strlen(s))
    {
        f(i,&s[i]);
        i++;
    }
}