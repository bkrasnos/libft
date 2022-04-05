/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:39:45 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/05 11:39:47 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i0;
	size_t	i;
	size_t	j;

	i = 0;
	i0 = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i0 < len)
	{
		while (haystack[i] && haystack[i] == needle[j] && (i0 + i) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i - j);
			i++;
			j++;
		}
		i = 0;
		j = 0;
		haystack++;
		i0++;
	}
	return (NULL);
}
