/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 12:28:33 by pmorrain          #+#    #+#             */
/*   Updated: 2017/05/03 17:00:39 by pmorrain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start_count;
	int		end_count;
	int		i;

	start_count = 0;
	end_count = 0;
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		start_count++;
		i++;
	}
	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		end_count++;
		i--;
	}
	if (i == -1)
		return (ft_strsub(s, start_count, ft_strlen(s) - start_count));
	else
		return (ft_strsub(s, start_count, ft_strlen(s)
					- start_count - end_count));
}
