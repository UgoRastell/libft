/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:22:43 by urastell          #+#    #+#             */
/*   Updated: 2026/11/05 14:30:28 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strcpy(char *destination, const char *source)
{
	unsigned int	i;

	i = 0;
	while (source[i] != '\0')
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}
