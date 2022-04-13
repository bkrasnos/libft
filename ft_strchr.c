/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:38:07 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/13 16:59:46 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;
	unsigned char	b;
	size_t			i;

	str = (unsigned char *)s;
	b = (unsigned char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == b)
			return ((char *)str + i);
		++i;
	}
	if (str[i] == b)
		return ((char *)str + i);
	return (NULL);
}
