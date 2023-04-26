/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-c <fgomes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:06:21 by fgomes-c          #+#    #+#             */
/*   Updated: 2023/04/26 19:13:16 by fgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int contador(char *str, char x)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str != x)
		{
			count++;
			while (*str && (*str != x))
				str++;
		}
		else
			str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**memory;
	char	*p;
	int		cont;
	int		i;
	cont = contador(s, c);
	memory = malloc((cont + 1) * sizeof(char *));
	if (!memory)
		return (NULL);
	i = 0;
	p = 
}