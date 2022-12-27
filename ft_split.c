/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 02:24:46 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/27 21:04:55 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

static  int total_string(char const *s, char a)
{
    int i;

    i = 0;
    while (*s)
    {
        while (*s == a && *s)
            s++;
        if (*s == '\0')
            return (i);
        while (*s != a && *s)
            s++; 
        i++;
    }
    return (i);
}

static  int total_char(char const *s, char a)
{
    int i;

    i = 0;
    while (*s && *s != a)
    {
        i++;
        s++;
    }
    return (i);
}

char    **ft_split(char const *s, char c)
{
    char    **a;
    int i;

    if(!s)
        return (0);
    i = 0;
    a = malloc(sizeof(char *) * total_string(s,c) + 1);
    if (!a)
        return (0);
    while (*s)
    {
        while (*s == c && *s)
            s++;
        if (*s == '\0')
            break;
            a[i] = ft_substr(s,0,total_char(s,c));
            i++;
            s = s + total_char(s,c);
    }
    a[i] = NULL;
    return (a);
}
/*
int main()
{
    const char a[] = "---42--ıstanbul-";
    size_t i = 0;


    while(ft_split(a,'-')[i])
    {
        printf("%s\n", ft_split(a,'-')[i]);
        i++;
    }
}*/