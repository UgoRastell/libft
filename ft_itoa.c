/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:00:54 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(long nb)
{
	int	len;

	len = 1;
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nb;
	int		len;

	nb = n;
	len = count_len(nb);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		result[0] = '0';
	while (nb > 0)
	{
		len--;
		result[len] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (result);
}

/*
#include <stdio.h>
#include <limits.h>

static void	show(const char *call, char *got, const char *want)
{
	if (got)
		printf("%s -> \"%s\"  (attendu \"%s\")\n", call, got, want);
	else
		printf("%s -> NULL  (attendu \"%s\")\n", call, want);
	free(got);
}

int	main(void)
{
	show("ft_itoa(0)      ", ft_itoa(0), "0");
	show("ft_itoa(7)      ", ft_itoa(7), "7");
	show("ft_itoa(-42)    ", ft_itoa(-42), "-42");
	show("ft_itoa(INT_MAX)", ft_itoa(INT_MAX), "2147483647");
	show("ft_itoa(INT_MIN)", ft_itoa(INT_MIN), "-2147483648");
	return (0);
}
*/
