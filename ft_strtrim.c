/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:29:01 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/28 16:26:40 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	int		j;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	j = ft_strlen(s1);
	while (j && ft_strchr(set, s1[j]))
	{
		j--;
	}
	a = ft_substr ((char *)s1, 0, j + 1);
	return (a);
}
