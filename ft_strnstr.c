/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfujiwar <tfujiwar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 08:04:19 by tfujiwar          #+#    #+#             */
/*   Updated: 2022/10/06 16:24:48 by tfujiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *	strnstr(const char *big, const char *little, size_t len)
{
	
}


// search to_find in str[0:len(to_find)-1]
int	ft_strcheck(char *str_i, char *to_find)
{
	int	j;

	if (ft_strlen(str_i) < ft_strlen(to_find))
	{
		return (0);
	}
	else
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str_i[j] != to_find[j])
			{
				return (0);
			}
			j++;
		}
		return (1);
	}
}

// search to_find in str[0:len(str)-1]
char	*ft_strstr(char *str, char *to_find)
{
	if (*str == '\0')
	{
		if (*to_find == '\0')
		{
			return (str);
		}
		else
		{
			return (NULL);
		}
	}
	if (ft_strcheck(str, to_find) == 1)
	{
		return (str);
	}
	else
	{
		return (ft_strstr(str + 1, to_find));
	}
}
