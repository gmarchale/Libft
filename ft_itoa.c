/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:25:16 by gmarchal          #+#    #+#             */
/*   Updated: 2022/10/17 18:18:51 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static size_t	ft_count_digits(int n)
{
	size_t	i;

	i = -1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	if (n == 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		negative;
	char	*str;

	negative = 0;
	if (n < 0)
	{
		negative = 1;
		n *= -1;
	}
	i = ft_count_digits(n);
	str = malloc(sizeof(char) * (i + negative + 1));
	if (!str)
		return (0);
	str[i + negative] = '\0';
	i--;
	while (i  >= negative)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	if (negative == 1)
		str[0] = '-';
	return (str);
}

#include <stdio.h>
int	main(void)
{
	int	n;
	
	n = -100;
	while (n < 110)
	{
		printf("%s\n", ft_itoa(n));
		n++;
	}
	return (0);
}
