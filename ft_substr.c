/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfujiwar <tfujiwar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:01:18 by tfujiwar          #+#    #+#             */
/*   Updated: 2022/10/07 12:25:44 by tfujiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	if (!s)
		return (NULL);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while ((size_t)start + i < ft_strlen(s) && i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
