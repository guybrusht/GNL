/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 16:03:39 by pmorrain          #+#    #+#             */
/*   Updated: 2017/05/11 15:53:08 by pmorrain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		main(int ac, char **av)
{
	if (ac == 1 || ac == 2)
	{
		ft_putstr("Usage: ./a.out [full function name] [arguments]\n"
				"\t      : atoi / ft_atoi\n"
				"\t      : bzero / ft_bzero\n"
				"\t      : convert_base\n"
				"\t      : isalnum / ft_isalnum\n"
				"\t      : isalpha / ft_isalpha\n"
				"\t      : isascii / ft_isascii\n"
				"\t      : isdigit / ft_isdigit\n"
				"\t      : islower / ft_islower\n"
				"\t      : isprint / ft_isprint\n"
				"\t      : isupper / ft_isupper\n"
				"\t      : ft_itoa\n"
				"\t      : ft_itoa_base\n"
				"\t    - : ft_lstadd\n"
				"\t    - : ft_lstdel\n"
				"\t    - : ft_lstdelone\n"
				"\t    - : ft_lstiter\n"
				"\t    - : ft_lstmap\n"
				"\t    - : ft_lstnew\n"
				"\t      : memchr / ft_memchr\n"
				"\t      : memcmp / ft_memcmp\n"
				"\t      : memcpy / ft_memcpy\n"
				"\t      : memccpy / ft_memccpy\n"
				"\t      : memmove / ft_memmove\n"
				"\t      : memset / ft_memset\n"
				"\t      : ft_putchar\n"
				"\t      : ft_putendl\n"
				"\t      : ft_putnbr\n"
				"\t      : ft_putstr\n"
				"\t      : strcat / ft_strcat\n"
				"\t      : strlcat / ft_strlcat\n"
				"\t      : strncat / ft_strncat\n"
				"\t      : strchr / ft_strchr\n"
				"\t      : strrchr / ft_strrchr\n"
				"\t    - : ft_strcmp\n"
				"\t    - : ft_strncmp\n"
				"\t      : strdup / ft_strdup\n"
				"\t      : strlen / ft_strlen\n"
				"\t      : strstr / ft_strstr\n"
				"\t      : strnstr / ft_strnstr\n"
				"\t      : ft_swap\n"
				"\t      : tolower / ft_tolower\n"
				"\t      : toupper / ft_toupper\n");
		return (0);
	}
	else if (ac >= 3)
	{
		if (!strcmp(av[1], "atoi") && ac == 3)
			ft_putnbr(atoi(av[2]));
		else if (!strcmp(av[1], "ft_atoi") && ac == 3)
			ft_putnbr(ft_atoi(av[2]));
		else if (!strcmp(av[1], "bzero") && ac == 4)
		{
			bzero(av[2], ft_atoi(av[3]));
			ft_putstr(av[2]);
		}
		else if (!strcmp(av[1], "ft_bzero") && ac == 4)
		{
			ft_bzero(av[2], ft_atoi(av[3]));
			ft_putstr(av[2]);
		}
		else if (!strcmp(av[1], "ft_convert_base") && ac == 5)
		{
			ft_putstr(ft_convert_base(av[2], av[3], av[4]));
		}
		else if (!strcmp(av[1], "isalnum") && ac == 3)
			ft_putnbr(isalnum(av[2][0]));
		else if (!strcmp(av[1], "ft_isalnum") && ac == 3)
			ft_putnbr(ft_isalnum(av[2][0]));
		else if (!strcmp(av[1], "isalpha") && ac == 3)
			ft_putnbr(isalpha(av[2][0]));
		else if (!strcmp(av[1], "ft_isalpha") && ac == 3)
			ft_putnbr(ft_isalpha(av[2][0]));
		else if (!strcmp(av[1], "isascii") && ac == 3)
			ft_putnbr(isascii(av[2][0]));
		else if (!strcmp(av[1], "ft_isascii") && ac == 3)
			ft_putnbr(ft_isascii(av[2][0]));
		else if (!strcmp(av[1], "isdigit") && ac == 3)
			ft_putnbr(isdigit(av[2][0]));
		else if (!strcmp(av[1], "ft_isdigit") && ac == 3)
			ft_putnbr(ft_isdigit(av[2][0]));
		else if (!strcmp(av[1], "islower") && ac == 3)
			ft_putnbr(islower(av[2][0]));
		else if (!strcmp(av[1], "ft_islower") && ac == 3)
			ft_putnbr(ft_islower(av[2][0]));
		else if (!strcmp(av[1], "isprint") && ac == 3)
			ft_putnbr(isprint(av[2][0]));
		else if (!strcmp(av[1], "ft_isprint") && ac == 3)
			ft_putnbr(ft_isprint(av[2][0]));
		else if (!strcmp(av[1], "isupper") && ac == 3)
			ft_putnbr(isupper(av[2][0]));
		else if (!strcmp(av[1], "ft_isupper") && ac == 3)
			ft_putnbr(ft_isupper(av[2][0]));
		else if (!strcmp(av[1], "ft_itoa") && ac == 3)
		{
			ft_putstr(ft_itoa(ft_atoi(av[2])));
		}
		else if (!strcmp(av[1], "ft_itoa_base") && ac == 4)
		{
			ft_putstr(ft_itoa_base(ft_atoi(av[2]), ft_atoi(av[3])));
		}
		else if (!strcmp(av[1], "memchr") && ac == 5)
		{
			ft_putstr(memchr(av[2], (int)av[3][0], ft_atoi(av[4])));
		}
		else if (!strcmp(av[1], "ft_memchr") && ac == 5)
		{
			ft_putstr(ft_memchr(av[2], (int)av[3][0], ft_atoi(av[4])));
		}
		else if (!strcmp(av[1], "memcmp") && ac == 5)
		{
			ft_putnbr(memcmp(av[2], av[3], ft_atoi(av[4])));
		}
		else if (!strcmp(av[1], "ft_memcmp") && ac == 5)
		{
			ft_putnbr(ft_memcmp(av[2], av[3], ft_atoi(av[4])));
		}
		else if (!strcmp(av[1], "memcpy") && ac == 5)
		{
			memcpy(av[2], av[3], ft_atoi(av[4]));
			ft_putstr(av[2]);
		}
		else if (!strcmp(av[1], "ft_memcpy") && ac == 5)
		{
			ft_memcpy(av[2], av[3], ft_atoi(av[4]));
			ft_putstr(av[2]);
		}
		else if (!strcmp(av[1], "memccpy") && ac == 6)
		{
			ft_putstr(memccpy(av[2], av[3], (int)av[4][0], ft_atoi(av[5])));
			ft_putchar('\n');
			ft_putstr(av[2]);
		}
		else if (!strcmp(av[1], "ft_memccpy") && ac == 6)
		{
			ft_putstr(ft_memccpy(av[2], av[3], (int)av[4][0], ft_atoi(av[5])));
			ft_putchar('\n');
			ft_putstr(av[2]);
		}
		else if (!strcmp(av[1], "memmove") && ac == 5)
		{
			memmove(av[2], av[3], ft_atoi(av[4]));
			ft_putstr(av[2]);
		}
		else if (!strcmp(av[1], "ft_memmove") && ac == 5)
		{
			ft_memmove(av[2], av[3], ft_atoi(av[4]));
			ft_putstr(av[2]);
		}
		else if (!strcmp(av[1], "memset") && ac == 5)
		{
			memset(av[2], av[3][0], ft_atoi(av[4]));
			ft_putstr(av[2]);
		}
		else if (!strcmp(av[1], "ft_memset") && ac == 5)
		{
			ft_memset(av[2], av[3][0], ft_atoi(av[4]));
			ft_putstr(av[2]);
		}
		else if (!strcmp(av[1], "ft_putchar") && ac == 3)
			ft_putchar(av[2][0]);
		else if (!strcmp(av[1], "ft_putendl") && ac == 3)
			ft_putendl(av[2]);
		else if (!strcmp(av[1], "ft_putnbr") && ac == 3)
			ft_putnbr(ft_atoi(av[2]));
		else if (!strcmp(av[1], "ft_putstr") && ac == 3)
			ft_putstr(av[2]);
		else if (!strcmp(av[1], "strcat") && ac == 4)
			ft_putstr(strcat(av[2], av[3]));
		else if (!strcmp(av[1], "ft_strcat") && ac == 4)
			ft_putstr(ft_strcat(av[2], av[3]));
		else if (!strcmp(av[1], "strlcat") && ac == 5)
		{
			ft_putstr("Return value: ");
			ft_putnbr(strlcat(av[2], av[3], ft_atoi(av[4])));
			ft_putchar('\n');
			ft_putstr(av[2]);
		}
		else if (!strcmp(av[1], "ft_strlcat") && ac == 5)
		{
			ft_putstr("Return value: ");
			ft_putnbr(ft_strlcat(av[2], av[3], ft_atoi(av[4])));
			ft_putchar('\n');
			ft_putstr(av[2]);
		}
		else if (!strcmp(av[1], "strncat") && ac == 5)
			ft_putstr(strncat(av[2], av[3], ft_atoi(av[4])));
		else if (!strcmp(av[1], "ft_strncat") && ac == 5)
			ft_putstr(ft_strncat(av[2], av[3], ft_atoi(av[4])));
		else if (!strcmp(av[1], "strchr") && ac == 4)
			ft_putstr(strchr(av[2], av[3][0]));
		else if (!strcmp(av[1], "ft_strchr") && ac == 4)
			ft_putstr(ft_strchr(av[2], av[3][0]));
		else if (!strcmp(av[1], "strrchr") && ac == 4)
			ft_putstr(strrchr(av[2], av[3][0]));
		else if (!strcmp(av[1], "ft_strrchr") && ac == 4)
			ft_putstr(ft_strrchr(av[2], av[3][0]));
		else if (!strcmp(av[1], "strcmp") && ac == 4)
			ft_putnbr(strcmp(av[2], av[3]));
		else if (!strcmp(av[1], "ft_strcmp") && ac == 4)
			ft_putnbr(ft_strcmp(av[2], av[3]));
		else if (!strcmp(av[1], "strncmp") && ac == 5)
			ft_putnbr(strncmp(av[2], av[3], ft_atoi(av[4])));
		else if (!strcmp(av[1], "ft_strncmp") && ac == 5)
			ft_putnbr(ft_strncmp(av[2], av[3], ft_atoi(av[4])));
		else if (!strcmp(av[1], "strcpy") && ac == 4)
			ft_putstr(strcpy(av[2], av[3]));
		else if (!strcmp(av[1], "ft_strcpy") && ac == 4)
			ft_putstr(ft_strcpy(av[2], av[3]));
		else if (!strcmp(av[1], "strncpy") && ac == 5)
			ft_putstr(strncpy(av[2], av[3], ft_atoi(av[4])));
		else if (!strcmp(av[1], "ft_strncpy") && ac == 5)
			ft_putstr(ft_strncpy(av[2], av[3], ft_atoi(av[4])));
		else if (!strcmp(av[1], "strdup") && ac == 3)
			ft_putstr(strdup(av[2]));
		else if (!strcmp(av[1], "ft_strdup") && ac == 3)
			ft_putstr(ft_strdup(av[2]));
		else if (!strcmp(av[1], "strlen") && ac == 3)
			ft_putnbr(strlen(av[2]));
		else if (!strcmp(av[1], "ft_strlen") && ac == 3)
			ft_putnbr(ft_strlen(av[2]));
		else if (!strcmp(av[1], "strstr") && ac == 4)
			ft_putstr(strstr(av[2], av[3]));
		else if (!strcmp(av[1], "ft_strstr") && ac == 4)
			ft_putstr(ft_strstr(av[2], av[3]));
		else if (!strcmp(av[1], "strnstr") && ac == 5)
			ft_putstr(strnstr(av[2], av[3], ft_atoi(av[4])));
		else if (!strcmp(av[1], "ft_strnstr") && ac == 5)
			ft_putstr(ft_strnstr(av[2], av[3], ft_atoi(av[4])));
		else if (!strcmp(av[1], "ft_swap") && ac == 4)
		{
			ft_swap((int*)av[2], (int*)av[3]);
			ft_putstr(av[2]);
			ft_putchar(' ');
			ft_putstr(av[3]);
			ft_putchar('\n');
		}
		else if (!strcmp(av[1], "tolower") && ac == 3)
			ft_putchar(tolower(av[2][0]));
		else if (!strcmp(av[1], "ft_tolower") && ac == 3)
			ft_putchar(ft_tolower(av[2][0]));
		else if (!strcmp(av[1], "toupper") && ac == 3)
			ft_putchar(toupper(av[2][0]));
		else if (!strcmp(av[1], "ft_toupper") && ac == 3)
			ft_putchar(ft_toupper(av[2][0]));
	}
	return (0);
}
