/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnavarro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:29:05 by mnavarro          #+#    #+#             */
/*   Updated: 2019/12/10 15:59:55 by mnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char		*cstr1;
	unsigned char		*cstr2;
	unsigned int		i;

	i = 0;
	cstr1 = (unsigned char *)str1;
	cstr2 = (unsigned char *)str2;
	if (!n || str1 == str2)
		return (str1);
	while (i < n)
	{
		cstr1[i] = cstr2[i];
		i++;
	}
	return (cstr1);
}
