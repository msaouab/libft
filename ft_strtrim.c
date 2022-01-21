/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:47:29 by msaouab           #+#    #+#             */
/*   Updated: 2021/11/15 12:54:43 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkstart(char const *set, char const *s)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	j = 0;
	while (s[i] && set[j])
	{
		j = 0;
		while (set[j] && s[i] != set[j])
			j++;
		if (s[i] == set[j])
			count++;
		i++;
	}
	return (count);
}

static int	checkend(char const *set, char const *s)
{
	int	i;
	int	j;
	int	count;

	i = ft_strlen(s) - 1;
	count = i + 1;
	j = 0;
	while (i >= 0 && set[j])
	{
		j = 0;
		while (set[j] && s[i] != set[j])
			j++;
		if (s[i] == set[j])
			count--;
		i--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		end;
	int		start;
	char	*trim;

	if (!set)
		return ((char *)s1);
	if (!s1)
		return (NULL);
	end = checkend(set, s1);
	start = checkstart(set, s1);
	i = end - start;
	if (i < 0 || i == 0)
		return (ft_strdup(""));
	trim = malloc(sizeof(char) * i + 1);
	if (!trim)
		return (NULL);
	i = 0;
	while (s1[i] && start < end)
		trim[i++] = s1[start++];
	trim[i] = '\0';
	return (trim);
}
