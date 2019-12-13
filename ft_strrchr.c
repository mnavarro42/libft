/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnavarro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:34:44 by mnavarro          #+#    #+#             */
/*   Updated: 2019/12/10 16:19:53 by mnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*cs;
	unsigned char	uc;
	int				i;

	cs = (char *)s;
	uc = (unsigned char)c;
	i = ft_strlen(cs);
	while (i > 0 && cs[i] != uc)
		i--;
	if (cs[i] == uc)
		return (&cs[i]);
	return (0);
}
