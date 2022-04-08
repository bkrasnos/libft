/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:37:52 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/08 16:26:31 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	check_separator(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

int	count_strings(const char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] != '\0' && check_separator(s[i], c))
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && !check_separator(s[i], c))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && !check_separator(s[i], c))
		i++;
	return (i);
}

char	*ft_word(const char *s, char c)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(s, c);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	if (word == NULL)
		return (0);
	while (i < len_word)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;

	if (!s)
		return (0);
	i = 0;
	strings = (char **)malloc(sizeof(char *)
			* (count_strings(s, c) + 1));
	if (strings == NULL)
		return (0);
	while (*s != '\0')
	{
		while (*s != '\0' && check_separator(*s, c))
			s++;
		if (*s != '\0')
		{
			strings[i] = ft_word(s, c);
			i++;
		}
		while (*s && !check_separator(*s, c))
			s++;
	}
	strings[i] = 0;
	return (strings);
}

// int	main(void)
// {
// 	char	**spl;
// 	int	i;
// 	i = 0;
// 	// spl = ft_split("   lorem   ipsum dolor     sit amet,
// consectetur   adipiscing elit. Sed non risus.
// Suspendisse   ", ' ');
// 	// spl =  ft_split("          ", ' ');
// 	spl =  ft_split(NULL, ' ');
// 	// while (spl[i])
// 	// {
// 	// 	write(1, spl[i], ft_strlen(spl[i]));
// 	// 	i++;
// 	// 	write(1, "\n", 1);
// 	// }
// 	if (!spl)
// 	{
// 		printf("null\n");
// 		return (0);
// 	}
// 	while (spl[i])
// 	{
// 		printf("str[%d] |%s|\n", i, spl[i]);
// 		++i;
// 	}
// 	return (0);
// }