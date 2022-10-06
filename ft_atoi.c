/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:41:57 by gmarchal          #+#    #+#             */
/*   Updated: 2022/10/06 18:00:02 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
        i++;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char str[] = "";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return (0);
}
