/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfujiwar <tfujiwar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:32:21 by tfujiwar          #+#    #+#             */
/*   Updated: 2022/10/07 18:34:39 by tfujiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_splen(char const *s, char c)
{
	int	i;
	int	splen;

	i = 0;
	splen = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			splen++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (splen);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_memcpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		sp_ind;
	char	**sp;

	i = 0;
	sp_ind = 0;
	sp = (char **)ft_calloc(calc_splen(s, c) + 1, sizeof(char *));
	if (sp == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			sp[sp_ind] = ft_strndup(s + j, i - j);
			sp_ind++;
		}
	}
	return (sp);
}
