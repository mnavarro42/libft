/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnavarro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 15:50:49 by mnavarro          #+#    #+#             */
/*   Updated: 2019/12/13 16:25:56 by mnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	w_len(char const *arr, char c)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	if (arr[0] && arr[0] != c)
		n++;
	while (i < (int)ft_strlen(arr))
	{
		if (arr[i] == c && arr[i + 1] != c && arr[i + 1])
			n++;
		i++;
	}
	return (n);
}

static char	*n_word(char const *arr, char c, int i)
{
	int		j;
	int		k;
	char	*word;

	j = i;
	while (arr[i] && arr[i] != c)
		i++;
	if (!(word = (char *)malloc(sizeof(char) * ((i - j) + 1))))
		return (0);
	k = 0;
	while (j != i)
	{
		word[k] = arr[j];
		k++;
		j++;
	}
	word[k] = '\0';
	return (word);
}

char		**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	if (!s)
		return (0);
	if (!(tab = (char **)malloc(sizeof(char *) * (w_len(s, c) + 1))))
		return (0);
	i = 0;
	j = 0;
	while (i <= (int)ft_strlen(s) && w_len(s, c))
	{
		if (ft_strlen(n_word(s, c, i)))
		{
			tab[j] = n_word(s, c, i);
			i = i + (ft_strlen(tab[j]) + 1);
			j++;
		}
		else
			i++;
	}
	tab[j] = 0;
	return (tab);
}
