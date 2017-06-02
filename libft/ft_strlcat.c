/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 09:08:08 by pmorrain          #+#    #+#             */
/*   Updated: 2017/04/17 18:57:41 by pmorrain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		src_size;
	unsigned int		dest_size;

	i = 0;
	j = 0;
	src_size = 0;
	dest_size = 0;
	while (src[src_size])
		src_size++;
	while (dest[dest_size])
		dest_size++;
	i = dest_size;
	while (size && src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < dest_size)
		return (src_size + size);
	else
		return (src_size + dest_size);
}
