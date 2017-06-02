/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 22:11:53 by pmorrain          #+#    #+#             */
/*   Updated: 2017/04/16 18:15:46 by pmorrain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*copy;

	len = 0;
	while (src[len])
		len++;
	copy = (char*)malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	while (len >= 0)
	{
		copy[len] = src[len];
		len--;
	}
	return (copy);
}
