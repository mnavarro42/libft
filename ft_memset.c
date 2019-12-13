/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnavarro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:47:29 by mnavarro          #+#    #+#             */
/*   Updated: 2019/12/10 15:53:34 by mnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*uc;

	uc = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		uc[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
