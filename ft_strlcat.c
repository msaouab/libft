/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:28:03 by msaouab           #+#    #+#             */
/*   Updated: 2021/11/15 12:53:51 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	szsrc;
	unsigned int	szdst;

	j = 0;
	i = 0;
	szsrc = ft_strlen(src);
	szdst = ft_strlen(dst);
	j = szdst;
	if (size < j || size == 0)
		return (szsrc + size);
	size -= j;
	if (size != 0)
	{
		while (src[i] && size - 1 > 0)
		{
			dst[j++] = src[i++];
			size--;
		}
		dst[j] = '\0';
	}
	return (szdst + szsrc);
}
