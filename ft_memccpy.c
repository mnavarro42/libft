/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnavarro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:54:44 by mnavarro          #+#    #+#             */
/*   Updated: 2019/12/10 16:00:06 by mnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*cdst;
	unsigned char	*csrc;
	size_t			i;
	unsigned char	cc;

	i = 0;
	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	cc = (unsigned char)c;
	while (i < n)
	{
		cdst[i] = csrc[i];
		if (csrc[i] == cc)
			return ((void *)(cdst + i + 1));
		i++;
	}
	return (0);
}
