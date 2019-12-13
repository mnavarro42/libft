/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnavarro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 16:37:41 by mnavarro          #+#    #+#             */
/*   Updated: 2019/12/13 16:45:16 by mnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		size;
	t_list	*temp;

	size = ft_lstsize(lst);
	temp = lst;
	size--;
	while (size > 0)
	{
		temp = temp->next;
		size--;
	}
	return (temp);
}
