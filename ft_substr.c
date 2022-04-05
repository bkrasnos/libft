/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:41:34 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/05 11:41:43 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_new;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= (size_t)ft_strlen(s))
	{
		len = 0;
		start = 0;
	}
	s_new = malloc(sizeof(char) * (len + 1));
	if (!s_new)
		return (NULL);
	while (len-- && s[start])
		s_new[i++] = s[start++];
	s_new[i] = '\0';
	return (s_new);
}
