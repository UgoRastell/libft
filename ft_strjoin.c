/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 18:11:29 by urastell          #+#    #+#             */
/*   Updated: 2026/07/19 17:22:28 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*empty_case(void)
{
	char	*resultat;

	resultat = malloc(1);
	if (resultat == NULL)
		return (NULL);
	resultat[0] = '\0';
	return (resultat);
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total = total + count(strs[i]);
		i++;
	}
	total = total + (size - 1) * count(sep);
	total = total + 1;
	return (total);
}

void	copy_all(char *resultat, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < size)
	{
		k = 0;
		while (strs[i][k])
			resultat[j++] = strs[i][k++];
		if (i != size - 1)
		{
			k = 0;
			while (sep[k])
				resultat[j++] = sep[k++];
		}
		i++;
	}
	resultat[j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*resultat;

	if (size == 0)
		return (empty_case());
	resultat = malloc(total_len(size, strs, sep) * sizeof(char));
	if (resultat == NULL)
		return (NULL);
	copy_all(resultat, size, strs, sep);
	return (resultat);
}
