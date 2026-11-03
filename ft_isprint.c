/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <ugo.rastell@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:52:06 by urastell          #+#    #+#             */
/*   Updated: 2026/11/03 15:13:14 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_isprint(char *str)
{
	char	*base;
	char	c;
	int		i;

	base = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 32 && c <= 126)
			write(1, &c, 1);
		else
		{
			write(1, "\\", 1);
			write(1, &base[c / 16], 1);
			write(1, &base[c % 16], 1);
		}
		i++;
	}
}
