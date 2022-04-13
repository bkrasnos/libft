/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:35:08 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/13 11:15:42 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size_check(int size)
{
	if (size < 0)
		return (0);
	else
		return (-1);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		size;
	int		nb;
	int		digits;

	digits = 0;
	i = 0;
	size = 1;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		size = 1 - 2 * (str[i] == '-');
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + str[i] - '0';
		++i;
		++digits;
		if (digits > 19)
			return (ft_size_check(size));
	}
	return (size * nb);
}

// int	main(void)
// {
// 	char	str[] = "  \t--+-+02k34ab567";
// 	char	str2[] = "  --+-+\v0234ab567";
// 	char	str3[] = "  ---+-+502a34ab567";
// 	char	str4[] = "1234ab567";
// 	char	str5[] = "+-94";
// 	char	str6[] = "-+48";
// 	char	str7[] = "--47";
// 	char	str8[] = "++5";
// 	char	str9[] = "234567890111";
// 	char	str10[] = "500000000000000000";
// 	char	str11[] = "50000000000000000000000";
// 	char	str12[] = "-500000000000000000000000000000000000000000";
// 	char	str13[] = "-9223372036854775807";
// 	int		ft;
// 	int		or;

// 	ft = ft_atoi("  \t--+-+0234ab567");
// 	printf("FT: Test 1 %s\n%d\n", str, ft);
// 	or = atoi("  \t--+-+0234ab567");
// 	printf("OR: Test 1 %s\n%d\n", str, or);
// 	ft = ft_atoi("  --+-+\v0234ab567");
// 	printf("FT: Test 2 %s\n%d\n", str2, ft);
// 	or = atoi("  --+-+\v0234ab567");
// 	printf("OR: Test 2 %s\n%d\n", str2, or);
// 	ft = ft_atoi("  ---+-+50234ab567");
// 	printf("FT: Test 3 %s\n%d\n", str3, ft);
// 	or = atoi("  ---+-+50234ab567");
// 	printf("OR: Test 3 %s\n%d\n", str3, or);
// 	ft = ft_atoi("1234ab567");
// 	printf("FT: Test 4 %s\n%d\n", str4, ft);
// 	or = atoi("1234ab567");
// 	printf("OR: Test 4 %s\n%d\n", str4, or);
// 	ft = ft_atoi("+-54");
// 	printf("FT: Test 5 %s\n%d\n", str5, ft);
// 	or = atoi("+-54");
// 	printf("OR: Test 5 %s\n%d\n", str5, or);
// 	ft = ft_atoi("+-54");
// 	printf("FT: Test 6 %s\n%d\n", str6, ft);
// 	or = atoi("-+48");
// 	printf("OR: Test 6 %s\n%d\n", str6, or);
// 	ft = ft_atoi("--48");
// 	printf("FT: Test 7 %s\n%d\n", str7, ft);
// 	or = atoi("--47");
// 	printf("OR: Test 7 %s\n%d\n", str7, or);
// 	ft = ft_atoi("++47");
// 	printf("FT: Test 8 %s\n%d\n", str8, ft);
// 	or = atoi("++47");
// 	printf("OR: Test 8 %s\n%d\n", str8, or);
// 	ft = ft_atoi("-234567890111");
// 	printf("FT: Test 9 %s\n%d\n", str9, ft);
// 	or = atoi("-234567890111");
// 	printf("OR: Test 9 %s\n%d\n", str9, or);
// 	ft = ft_atoi("500000000000000000");
// 	printf("FT: Test 10 %s\n%d\n", str10, ft);
// 	or = atoi("500000000000000000");
// 	printf("OR: Test 10 %s\n%d\n", str10, or);
// 	ft = ft_atoi("50000000000000000000000");
// 	printf("FT: Test 11 %s\n%d\n", str11, ft);
// 	or = atoi("50000000000000000000000");
// 	printf("OR: Test 11 %s\n%d\n", str11, or);
// 	ft = ft_atoi("-500000000000000000000000000000000000000000");
// 	printf("FT: Test 12 %s\n%d\n", str12, ft);
// 	or = atoi("-500000000000000000000000000000000000000000");
// 	printf("OR: Test 12 %s\n%d\n", str12, or);
// 	ft = ft_atoi("-9223372036854775807");
// 	printf("FT: Test 13 %s\n%d\n", str13, ft);
// 	or = atoi("-9223372036854775807");
// 	printf("OR: Test 13 %s\n%d\n", str13, or);
// 	return (0);
// }
