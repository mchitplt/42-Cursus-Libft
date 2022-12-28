/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:36:55 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/28 15:12:24 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_isalnum(int str)
{
	return (ft_isalpha(str) || ft_isdigit(str));
}
