/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 17:06:40 by pmorrain          #+#    #+#             */
/*   Updated: 2017/05/05 16:45:34 by pmorrain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_char_is_separator(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

static int		ft_wordcount_c(const char *str, char *charset)
{
	int		i;
	int		wc;

	i = 0;
	wc = 0;
	while (str[i])
	{
		while (ft_char_is_separator(str[i], charset) && str[i])
			i++;
		if (!ft_char_is_separator(str[i], charset) && str[i])
		{
			while (!ft_char_is_separator(str[i], charset) && str[i])
				i++;
			wc++;
		}
	}
	return (wc);
}

static char		*ft_allocate_c(char **wordlist, const char *str, char *charset)
{
	int		i;
	int		wc;
	int		len;

	i = 0;
	wc = 0;
	while (str[i])
	{
		len = 0;
		while (ft_char_is_separator(str[i], charset) && str[i])
			i++;
		if (!ft_char_is_separator(str[i], charset) && str[i])
		{
			while (!ft_char_is_separator(str[i + len], charset) && str[i + len])
				len++;
			if ((wordlist[wc] = (char*)malloc((len + 1) * sizeof(char)))
					== NULL)
				return (NULL);
			i += len;
			wc++;
		}
	}
	return (*wordlist);
}

static void		ft_populate_c(char **wordlist, const char *str, char *charset)
{
	int		i;
	int		j;
	int		wc;
	int		len;

	i = 0;
	wc = 0;
	while (str[i])
	{
		len = 0;
		while (ft_char_is_separator(str[i], charset) && str[i])
			i++;
		if (!ft_char_is_separator(str[i], charset) && str[i])
		{
			j = 0;
			while (!ft_char_is_separator(str[i], charset) && str[i])
			{
				wordlist[wc][j] = str[i];
				i++;
				j++;
			}
			wordlist[wc][j] = '\0';
			wc++;
		}
	}
}

char			**ft_split(const char *str, char *charset)
{
	int		wordcount;
	char	**wordlist;

	if ((wordcount = ft_wordcount_c(str, charset)) == 0)
	{
		if ((wordlist = (char**)malloc(sizeof(char*))) == NULL)
			return (NULL);
		wordlist[0] = NULL;
		return (wordlist);
	}
	if ((wordlist = (char**)malloc((wordcount + 1) * sizeof(char*))) == NULL)
		return (NULL);
	if (ft_allocate_c(wordlist, str, charset) == NULL)
		return (NULL);
	ft_populate_c(wordlist, str, charset);
	wordlist[wordcount] = NULL;
	return (wordlist);
}
