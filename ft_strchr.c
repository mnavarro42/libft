/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnavarro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:17:13 by mnavarro          #+#    #+#             */
/*   Updated: 2019/12/10 16:13:30 by mnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*cs;
	unsigned char	uc;
	unsigned int	i;

	cs = (char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (cs[i])
	{
		if (cs[i] == uc)
			return (cs + i);
		i++;
	}
	if (c == '\0')
		return (cs + i);
	return (0);
}
