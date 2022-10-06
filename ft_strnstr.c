/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfujiwar <tfujiwar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 08:04:19 by tfujiwar          #+#    #+#             */
/*   Updated: 2022/10/07 08:14:44 by tfujiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	llen;

	llen = ft_strlen(little);
	if (llen == 0)
		return ((char *) big);
	while (len >= llen || (big == NULL && len > 0))
	{
		if (ft_strncmp(big, little, llen) == 0)
			return ((char *) big);
		big++;
		len--;
	}
	return (NULL);
}

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	int		i;
// 	int		j;
// 	int		flag;

// 	i = 0;
// 	while (i <= (int)len - (int)ft_strlen(little))
// 	{
// 		flag = 1;
// 		j = 0;
// 		while (little[j] != '\0')
// 		{
// 			if (big[i + j] != little[j])
// 			{
// 				flag = 0;
// 				break ;
// 			}
// 			j++;
// 		}
// 		if (flag == 1)
// 			return ((char *) &big[i]);
// 		i++;
// 	}
// 	return (NULL);
// }
