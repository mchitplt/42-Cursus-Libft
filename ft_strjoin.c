/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:05:29 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/24 18:26:48 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *c;
    int i;
    int j;

    i = 0;
    j = 0;
    if(!s1)
        return(NULL);
    c = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (c == NULL)
        return (0);
    while(s1[i])
    {
        c[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        c[i++] = s2[j++];
    }
    c [i] = '\0';
    return (c);
}
/*
int main()
{
    char    a[] = "mucahit";
    char    b[] = "polat";

    printf("%s", ft_strjoin(a,b));
}*/