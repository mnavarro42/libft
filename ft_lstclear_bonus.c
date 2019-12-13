/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnavarro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 17:25:44 by mnavarro          #+#    #+#             */
/*   Updated: 2019/12/13 16:42:14 by mnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*new;

	if (*lst)
	{
		aux = *lst;
		while (aux)
		{
			new = aux->next;
			del(aux->content);
			free(aux);
			aux = new;
		}
		*lst = NULL;
	}
}
