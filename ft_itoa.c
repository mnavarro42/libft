/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnavarro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 15:43:32 by mnavarro          #+#    #+#             */
/*   Updated: 2019/12/13 16:05:00 by mnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cont_dig(int n)
{
	int				dig;
	unsigned int	nb;

	dig = 1;
	if (n == 0)
		return (dig);
	else if (n < 0)
	{
		nb = n * -1;
		dig++;
		while (nb /= 10)
			dig++;
	}
	else
		while (n /= 10)
			dig++;
	return (dig);
}

char		*ft_itoa(int n)
{
	char			*str;
	int				dig;
	unsigned int	nb;

	dig = cont_dig(n);
	if (!(str = malloc(dig + 1)))
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		nb = n * -1;
	}
	else
		nb = n;
	str[dig--] = '\0';
	while (dig >= 0 && str[dig] != '-')
	{
		str[dig--] = nb % 10 + 48;
		nb /= 10;
	}
	return (str);
}
