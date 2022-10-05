/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:34:44 by gmarchal          #+#    #+#             */
/*   Updated: 2022/10/05 16:03:44 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srcsize;
	size_t	dstsize2;

	i = 0;
	srcsize = 0;
	//if (dstsize == 0)
	//	return (0);
	while (src[srcsize])
		srcsize++;
	if (dstsize == 0)
		return (srcsize);
	while (dst[i])
		i++;
	dstsize2 = i;
	j = 0;
	if (dstsize < i)
		return (srcsize + dstsize);
	while (i < dstsize - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (srcsize + dstsize2);
}
