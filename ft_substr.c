/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:57:25 by gmarchal          #+#    #+#             */
/*   Updated: 2022/10/13 14:01:31 by gmarchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;
	char	*src;

	src = (char *)s;
	if (!src)
		return (0);
	if (ft_strlen(src) < start)
		len = 0;
	if (ft_strlen(src + start) < len)
		len = ft_strlen(src + start);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ft_strlcpy(ret, src + start, len + 1);
	return (ret);
}
