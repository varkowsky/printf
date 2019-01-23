/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:02:09 by ebaudet           #+#    #+#             */
/*   Updated: 2019/01/23 21:35:43 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

void	print_uniq_caract(t_ftprintf *t, char *format, char *buf)
{
	ft_strncat(buf, format + t->i, 1);
}

void	put_o(t_ftprintf *t, char *buf)
{
	char	*str;

	str = ft_lutooct(va_arg(t->ap, long unsigned int));
	ft_strcat(buf, str);
	free(str);
}

void	put_p(t_ftprintf *t, char *buf)
{
	char	*str;

	str = ft_lutohex(va_arg(t->ap, long unsigned int));
	ft_strcat(buf, str);
	free(str);
}

void	put_x(t_ftprintf *t, char *buf)
{
	char	*str;

	str = ft_lutohex(va_arg(t->ap, long unsigned int));
	ft_strcat(buf, str + 2 * sizeof(char));
	free(str);
}

void	put_x_cap(t_ftprintf *t, char *buf)
{
	char	*str;
	int		i;

	str = ft_lutohex(va_arg(t->ap, long unsigned int));
	i = -1;
	while (str[++i] != 0)
		str[i] = ft_toupper(str[i]);
	ft_strcat(buf, str + 2 * sizeof(char));
	free(str);
}

void	put_c(t_ftprintf *t, char *buf)
{
	char	c;

	c = (char)(va_arg(t->ap, int));
	ft_strncat(buf, &c, 1);
}

void	put_s(t_ftprintf *t, char *buf)
{
	char	*str;

	str = ft_strdup(va_arg(t->ap, char *));
	ft_strcat(buf, str);
	free(str);
}

void	put_d(t_ftprintf *t, char *buf)
{
	char	*str;

	str = ft_itoa(va_arg(t->ap, int));
	ft_strcat(buf, str);
	free(str);
}

void	put_u(t_ftprintf *t, char *buf)
{
	char	*str;

	str = ft_itoa(va_arg(t->ap, unsigned int));
	ft_strcat(buf, str);
	free(str);
}

void	put_f(t_ftprintf *t, char *buf)
{
	char	*str;

	str = ft_dtoa(va_arg(t->ap, double), 2);
	ft_strcat(buf, str);
	free(str);
}