/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:21:17 by urastell          #+#    #+#             */
/*   Updated: 2026/11/16 15:57:13 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/*
int	main(void)
{
	ft_putstr_fd("ft_putstr_fd(\"salut 42\", 1) -> [", 1);
	ft_putstr_fd("salut 42", 1);
	ft_putstr_fd("]  (attendu [salut 42])\n", 1);
	ft_putstr_fd("ft_putstr_fd(\"\", 1)         -> [", 1);
	ft_putstr_fd("", 1);
	ft_putstr_fd("]  (attendu [])\n", 1);
	return (0);
}
*/
