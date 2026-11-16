/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 09:14:52 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}

/*
#include <limits.h>

static void	show(int n, char *want)
{
	ft_putstr_fd("ft_putnbr_fd -> ", 1);
	ft_putnbr_fd(n, 1);
	ft_putstr_fd("  (attendu ", 1);
	ft_putstr_fd(want, 1);
	ft_putstr_fd(")\n", 1);
}

int	main(void)
{
	show(0, "0");
	show(7, "7");
	show(-7, "-7");
	show(42, "42");
	show(INT_MAX, "2147483647");
	show(INT_MIN, "-2147483648");
	return (0);
}
*/
