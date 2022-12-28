/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:01:43 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/28 18:20:13 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t	s)
{
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dst && !s)
		return (0);
	dst_len = ft_strlen(dst);
	if (dst_len >= s)
		return (src_len + s);
	ft_strlcpy((dst + dst_len), src, s - dst_len);
	return (dst_len + src_len);
}
