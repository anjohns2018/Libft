/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljohnso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 15:54:10 by aljohnso          #+#    #+#             */
/*   Updated: 2018/07/02 17:20:44 by aljohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char		*s;
	size_t		i;

	if (size > 0)
	{
		i = 0;
		s = (char*)malloc(sizeof(char) * size);
		if (s != NULL)
		{
			while (size > 0)
			{
				s[i] = 0;
				size--;
				i++;
			}
			return (s);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
