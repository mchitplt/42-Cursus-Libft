/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:02:51 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/28 15:22:50 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

int	ft_memcmp(const void *ptr1, const void	*ptr2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;

	a = (const unsigned char *) ptr1;
	b = (const unsigned char *) ptr2;
	while (n-- > 0)
	{
		if (*a != *b)
		{
			return (*a - *b);
		}
		a++;
		b++;
	}
	return (0);
}
