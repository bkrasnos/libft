/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:38:20 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/04 13:38:23 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == src || !n)
		return (dest);
	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return (dest);
}

// #include <string.h>
// int	main(void)
// {
// 	char	dst[12] = "Hello world";
// 	char	dst2[12] = "Hello world";

// 	printf("FT: %s\n", ft_memcpy(dst+2, dst, 5));
// 	printf("OR: %s\n", memcpy(dst2+2, dst2, 5));
// 	return (0);
// }