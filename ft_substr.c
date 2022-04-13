/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:41:34 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/12 11:30:11 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	len_s;
	size_t	new_len;

	if (!s)
		return (0);
	len_s = ft_strlen(s);
	new_len = 0;
	while (s[start + new_len] && len > new_len)
		++new_len;
	substr = (char *)malloc(sizeof(*substr) * (new_len + 1));
	if (NULL == substr)
		return (0);
	if (len_s < start)
	{
		ft_memset(substr, 0, new_len + 1);
		return (substr);
	}
	ft_strlcpy(substr, s + start, new_len + 1);
	return (substr);
}
