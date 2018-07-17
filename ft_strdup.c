/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljohnso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 21:06:00 by aljohnso          #+#    #+#             */
/*   Updated: 2018/07/02 16:53:26 by aljohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*str;

	size = ft_strlen(src);
	str = (char *)ft_memalloc(size + 1);
	if (!str)
		return (0);
	i = -1;
	while (++i < size)
		str[i] = *(src + i);
	return (str);
}
