/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnavarro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:01:31 by mnavarro          #+#    #+#             */
/*   Updated: 2019/12/10 16:07:16 by mnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cs;
	unsigned int	i;

	i = 0;
	cs = (unsigned char *)s;
	while (i < n)
	{
		if (cs[i] == (unsigned char)c)
			return (cs + i);
		i++;
	}
	return (0);
}
