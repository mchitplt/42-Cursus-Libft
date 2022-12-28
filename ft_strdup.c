/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:01:36 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/28 16:03:07 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*a;
	size_t	i;

	i = ft_strlen(s1) + 1;
	a = (char *)malloc(i * 1);
	if (!a)
		return (0);
	ft_memcpy(a, s1, i);
	return (a);
}
