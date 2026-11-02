/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:46:05 by urastell          #+#    #+#             */
/*   Updated: 2026/07/19 16:36:27 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*resultat;

	i = 0;
	if (src == NULL)
		return (NULL);
	while (src[i])
		i++;
	resultat = malloc((i + 1) * sizeof(char));
	if (resultat == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		resultat[i] = src[i];
		i++;
	}
	resultat[i] = '\0';
	return (resultat);
}
