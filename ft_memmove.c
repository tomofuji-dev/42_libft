/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfujiwar <tfujiwar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:27:55 by tfujiwar          #+#    #+#             */
/*   Updated: 2022/10/06 09:23:50 by tfujiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;

	dp = dest;
	sp = src;
	if (dp > sp)
	{
		while (n-- > 0)
			dp[n] = sp[n];
	}
	else
	{
		while (n-- > 0)
			*dp++ = *sp++;
	}
	return (dest);
}
