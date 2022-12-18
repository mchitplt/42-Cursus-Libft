/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:36:55 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/13 12:22:53 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_isalnum(int str)
{
	return (ft_isalpha(str) || ft_isdigit(str));
}

/*int	main()
{
	printf("%d\n", ft_isalnum('h'));
	printf("%d", ft_isalnum(48));
}*/