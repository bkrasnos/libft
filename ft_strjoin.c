/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:38:40 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/13 17:02:49 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			idx;
	int			idx_join;
	char		*join;

	if (!s1 || !s2)
		return (0);
	join = malloc(sizeof(char)
			*(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (!s1 || !s2 || !(join))
		return (NULL);
	idx = 0;
	idx_join = 0;
	while (s1[idx])
		join[idx_join++] = s1[idx++];
	idx = 0;
	while (s2[idx])
		join[idx_join++] = s2[idx++];
	join[idx_join] = '\0';
	return (join);
}

// int	main(void)
// {
// 	char	s1[] = "Boh";
// 	char	s2[] = "dan";
// 	char	*join;

// 	join = ft_strjoin(s1, s2);
// 	if (NULL == join)
// 		printf("join is null!\n");
// 	else
// 		printf("join is '%s'\n", join);
// 	free(join);
// 	return (0);
// }