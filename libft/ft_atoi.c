/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:54:28 by pmorrain          #+#    #+#             */
/*   Updated: 2017/04/17 19:27:46 by pmorrain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		number_index(const char *str)
{
	int i;

	i = 0;
	while (str[i] == '-' || str[i] == '+' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'
			|| str[i] == ' ' || (str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-' || str[i] == '+' || (str[i] >= '0' && str[i] <= '9'))
			break ;
		i = i + 1;
	}
	return (i);
}

int				ft_atoi(const char *str)
{
	int		i;
	char	sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	i = number_index(str);
	if (str[i] == '-')
	{
		sign = -1;
		i = i + 1;
	}
	else if (str[i] == '+')
		i = i + 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		else
			break ;
		i = i + 1;
	}
	return (sign * result);
}
