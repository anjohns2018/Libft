/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljohnso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 15:25:14 by aljohnso          #+#    #+#             */
/*   Updated: 2018/07/11 02:25:08 by aljohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	char	*fstr;
	int		i;
	int		j;

	if (s == NULL || f == NULL)
		return (NULL);
	if (s != NULL)
	{
		j = ft_strlen(s);
		fstr = (char *)malloc(sizeof(char) * j + 1);
		if (fstr != NULL)
		{
			i = 0;
			while (i < j)
			{
				fstr[i] = (*f)(s[i]);
				i++;
			}
			fstr[i] = '\0';
			return (fstr);
		}
	}
	return (0);
}
