/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnavarro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 15:43:14 by mnavarro          #+#    #+#             */
/*   Updated: 2019/12/13 15:52:56 by mnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *str)
{
	int	size;
	int	i;

	i = 0;
	size = ft_strlen(str);
	while (i < size)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char				*str;
	unsigned int		i;
	unsigned int		size;
	unsigned int		j;

	if (!s1)
		return (0);
	i = 0;
	j = 0;
	size = ft_strlen(s1);
	while (check_set(s1[i], set))
		i++;
	while (size > 0 && check_set(s1[size - 1], set))
		size--;
	if (i > size)
		size = 1;
	if (!(str = (char*)malloc(sizeof(char) * (size - i + 1))))
		return (0);
	while (i < size)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
