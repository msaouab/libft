/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:07:30 by msaouab           #+#    #+#             */
/*   Updated: 2021/11/14 12:21:13 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *fnd, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	if (*fnd == 0)
		return ((char *)str);
	j = 0;
	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] != '\0' && fnd[j] == str[i + j] && i + j < n)
			j++;
		if (!fnd[j] || (str[i] == fnd[j]))
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
