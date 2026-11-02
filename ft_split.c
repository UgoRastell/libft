/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 11:46:34 by urastell          #+#    #+#             */
/*   Updated: 2026/07/18 19:23:54 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	detect_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_charset(char *str, char *charset)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if (!detect_charset(str[i], charset)
			&& (i == 0 || detect_charset(str[i - 1], charset)))
		{
			nb++;
		}
		i++;
	}
	return (nb);
}

char	*make_word(char *start, char *charset)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (start[len] && !detect_charset(start[len], charset))
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	fill_words(char **result, char *str, char *charset)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (detect_charset(str[i], charset))
			i++;
		else
		{
			result[j] = make_word(&str[i], charset);
			len = 0;
			while (result[j][len])
				len++;
			i = i + len;
			j++;
		}
	}
	result[j] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		nb_words;

	nb_words = count_charset(str, charset);
	result = malloc(sizeof(char *) * (nb_words + 1));
	if (result == NULL)
		return (NULL);
	fill_words(result, str, charset);
	return (result);
}
