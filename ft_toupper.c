/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:42:02 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/13 17:09:08 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

// int	main(void)
// {
// 	int		ch;

// 	ch = 'a';
// 	printf("c was '%c' and now is '%c'\n", ch, ft_toupper(ch));
// 	ch = 'A';
// 	printf("c was '%c' and now is '%c'\n", ch, ft_toupper(ch));
// 	ch = '0';
// 	printf("c was '%c' and now is '%c'\n", ch, ft_toupper(ch));
// 	ch = ' ';
// 	printf("c was '%c' and now is '%c'\n", ch, ft_toupper(ch));
// 	ch = 'z';
// 	printf("c was '%c' and now is '%c'\n", ch, ft_toupper(ch));
// 	ch = '@';
// 	printf("c was '%c' and now is '%c'\n", ch, ft_toupper(ch));
// 	return (0);
// }