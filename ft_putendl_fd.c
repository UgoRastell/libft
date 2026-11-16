/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:12:15 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
int	main(void)
{
	ft_putstr_fd("ft_putendl_fd(\"salut\", 1) -> [", 1);
	ft_putendl_fd("salut", 1);
	ft_putstr_fd("]  (attendu [salut, puis ] a la ligne)\n", 1);
	ft_putstr_fd("ft_putendl_fd(\"\", 1)      -> [", 1);
	ft_putendl_fd("", 1);
	ft_putstr_fd("]  (attendu [, puis ] a la ligne)\n", 1);
	return (0);
}
*/
