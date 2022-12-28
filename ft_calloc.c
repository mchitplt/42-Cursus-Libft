/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:18:07 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/28 15:12:19 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	n, size_t	s)
{
	void	*str;

	str = malloc(n * s);
	if (!str)
		return (str);
	ft_bzero(str, (n * s));
	return (str);
}
