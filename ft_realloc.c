/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljohnso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 18:24:04 by aljohnso          #+#    #+#             */
/*   Updated: 2018/07/02 17:23:37 by aljohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *p1, size_t size)
{
	char	*p2;

	if (!size && p1)
	{
		if (!(p2 = (char *)malloc(1)))
			return (NULL);
		ft_memdel(&p1);
		return (p2);
	}
	if (!(p2 = (char *)malloc(size)))
		return (NULL);
	if (p1)
	{
		ft_memcpy(p2, p1, size);
		ft_memdel(&p1);
	}
	return (p2);
}
