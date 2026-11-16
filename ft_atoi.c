/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 17:06:31 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char	*s[] = {"42", "   -42", "   +7x", "--5", "+-5", "- 3",
		"2147483647", "-2147483648", "abc", "  0012", NULL};
	int			i;

	i = 0;
	while (s[i])
	{
		printf("ft_atoi(\"%s\") = %d  (atoi : %d)\n",
			s[i], ft_atoi(s[i]), atoi(s[i]));
		i++;
	}
	return (0);
}
*/
