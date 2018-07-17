/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljohnso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 15:44:32 by aljohnso          #+#    #+#             */
/*   Updated: 2018/07/02 17:15:52 by aljohnso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*save;
	t_list		*list;

	list = *alst;
	while (list)
	{
		save = list;
		del((save->content), save->content_size);
		free(save);
		list = list->next;
	}
	*alst = NULL;
}
