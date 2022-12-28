/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 22:47:34 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/28 16:38:57 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*a;

	if (!s || !f)
		return (0);
	i = 0;
	a = malloc((ft_strlen(s) + 1) * (sizeof(char)));
	if (!a)
		return (0);
	while (s[i])
	{
		a[i] = f(i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}
