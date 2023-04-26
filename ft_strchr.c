/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-c <fgomes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:50:32 by fgomes-c          #+#    #+#             */
/*   Updated: 2023/04/25 14:04:13 by fgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*(unsigned char *) s == (unsigned char) c)
			return ((char *) s);
		s++;
	}
	if (*(unsigned char *) s == (unsigned char) c)
		return ((char *) s);
	return (NULL);
}
