/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfujiwar <tfujiwar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 13:20:48 by tfujiwar          #+#    #+#             */
/*   Updated: 2022/10/07 10:03:58 by tfujiwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	process_digit(char *nptr, long code)
{
	long	n;
	long	d;

	n = 0;
	while ((*nptr >= '0') && (*nptr <= '9'))
	{
		d = *nptr++ - '0';
		if (code > 0)
		{
			if (n <= (LONG_MAX - d) / 10)
				n = 10 * n + d;
			else
				return (-1);
		}
		else
		{
			if (n >= (LONG_MIN + d) / 10)
				n = 10 * n - d;
			else
				return (0);
		}
	}
	return ((int) n);
}

int	ft_atoi(char *nptr)
{
	long	code;

	while (((*nptr >= '\t') && (*nptr <= '\r')) || (*nptr == ' '))
		nptr++;
	code = 1;
	while ((*nptr == '-') || (*nptr == '+'))
	{
		if (*nptr == '-')
			code *= -1;
		nptr++;
	}
	return (process_digit(nptr, code));
}
