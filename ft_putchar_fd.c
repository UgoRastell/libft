/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:03:32 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int	main(void)
{
	ft_putstr_fd("ft_putchar_fd('a', 1) -> ", 1);
	ft_putchar_fd('a', 1);
	ft_putstr_fd("  (attendu a)\n", 1);
	ft_putstr_fd("ft_putchar_fd('E', 2) -> ", 1);
	ft_putchar_fd('E', 2);
	ft_putstr_fd("  (attendu E, sur la sortie d'erreur)\n", 1);
	return (0);
}
*/
