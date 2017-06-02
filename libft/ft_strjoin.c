/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 12:21:04 by pmorrain          #+#    #+#             */
/*   Updated: 2017/05/05 16:07:31 by pmorrain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;

	if ((ptr = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1)
					* sizeof(char))) == NULL)
		return (NULL);
	ft_strcpy(ptr, s1);
	ft_strcat(ptr, s2);
	ptr[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (ptr);
}
