/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljohnso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 14:39:29 by aljohnso          #+#    #+#             */
/*   Updated: 2018/07/11 02:35:58 by aljohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t i;
	size_t z;
	size_t sign;

	i = 0;
	z = 0;
	sign = 1;
	while (ft_isspace(str[z]))
		z++;
	if (str == '\0')
		return (0);
	if (str[z] == '-' || str[z] == '+')
	{
		sign = (str[z] == '-' ? -1 : 1);
		z++;
	}
	while (str[z] && str[z] >= '0' && str[z] <= '9')
	{
		i = i * 10 + str[z] - '0';
		z++;
	}
	return (i * sign);
}
