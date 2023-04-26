/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-c <fgomes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:45:25 by fgomes-c          #+#    #+#             */
/*   Updated: 2023/04/17 17:37:01 by fgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;
	size_t	i;
	size_t	n;

	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	i = 0;
	n = dlen;
	if (size <= dlen)
		return (slen + size);
	while (src[i] && n < size - 1)
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';
	return (dlen + slen);
}
