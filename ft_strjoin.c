/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-c <fgomes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:40:14 by fgomes-c          #+#    #+#             */
/*   Updated: 2023/04/25 20:12:03 by fgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	char		*strsoma;

	strsoma = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !strsoma)
		return (NULL);
	i = 0;
	j = 0;
	while (i < (ft_strlen(s1) + ft_strlen(s2)))
	{
		if (i < ft_strlen(s1))
		{
			strsoma[i] = s1[i];
			i++;
		}
		else
		{
			strsoma[i] = s2[j];
			i++;
			j++;
		}
	}
	strsoma[i] = '\0';
	return (strsoma);
}
