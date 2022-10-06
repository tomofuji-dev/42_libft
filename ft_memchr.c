/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfujiwar <tfujiwar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:17:17 by tfujiwar          #+#    #+#             */
/*   Updated: 2022/10/06 14:40:33 by tfujiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*usp;
	unsigned char	uc;
	size_t			len;

	usp = (unsigned char *) s;
	uc = (unsigned char) c;
	len = ft_min(ft_strlen(s) + 1, n);
	while (len-- > 0)
	{
		if (*usp == uc)
			return (usp);
		usp++;
	}
	return (NULL);
}
