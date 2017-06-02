/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 17:07:06 by pmorrain          #+#    #+#             */
/*   Updated: 2017/05/05 16:45:03 by pmorrain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char	*c1;

	if ((c1 = (char*)malloc(2 * sizeof(char))) == NULL)
		return (NULL);
	c1[0] = c;
	c1[1] = '\0';
	return (ft_split(s, c1));
}
