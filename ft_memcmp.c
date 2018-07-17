/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljohnso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 15:57:02 by aljohnso          #+#    #+#             */
/*   Updated: 2018/06/23 15:57:27 by aljohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char		*point_string1;
	unsigned const char		*point_string2;
	size_t					i;

	i = 0;
	point_string1 = s1;
	point_string2 = s2;
	while (n--)
	{
		if (point_string1[i] != point_string2[i])
			return (point_string1[i] - point_string2[i]);
		i++;
	}
	return (0);
}
