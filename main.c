/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 20:41:51 by ebaudet           #+#    #+#             */
/*   Updated: 2019/01/23 21:39:46 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int main(void)
{

	int i;

	i = 12;

	ft_printf("12.5 = %f\n-25.744 = %f\n-25.745 = %f\n3.145 = %f\n3.146 = %f\n3.144 = %f\n",
	          12.5, -25.744, -25.745, 3.145, 3.146, 3.144);

	ft_printf("char-%c-%s-%s-%c-%s-%c-\n", 'a', "un", "deux", 'b', "trois", 'c');
	ft_printf("char-%c-%s-%s-%c-%s-%c-%-i", 'a', "un", "deux", 'b', "trois", 'd');
    ft_printf("");
	ft_printf("\n----------\n");
	ft_printf("\nabcdefg\nh");
	ft_printf(". .");
	ft_printf("ft_printf: coucou\n");
	printf("printf: coucou\n");

	ft_printf("ft_printf: Je m'appelle %s %s, et j'ai %d ans\n", "Emilien", "Baudet", 29);
	printf("printf: Je m'appelle %s %s, et j'ai %d ans\n", "Emilien", "Baudet", 29);
	ft_printf("\n----------\n");
	ft_printf("ft_printf: &i = %p\n", &i);
	printf("printf: &i = %p\n", &i);
	ft_printf("ft_printf: 1835 = (x)%x, (X)%X, (p)%p\n", 1835, 1835, 1835);
	printf("printf: 1835 = (x)%x, (X)%X, (p)%d\n", 1835, 1835, 1835);
	ft_printf("ft_printf: octal 123 = %o\n", 123);
	printf("printf: octal 123 = %o\n", 123);

	printf("printf: 123.37 = %g\n", 123.37);

	ft_printf("coucou%d\n", i);
	ft_printf("\n----------\n");
	printf("%00000002$d %01$d\n", 1, 2);
	printf("%5d\n%5d\n", 1, 22);
	printf("'%5d'\n'%-5d'\n", 1, 22);
	printf("'%+5d'\n'%-+5d'\n", 1, 22);
	printf("'%+05d'\n'%+05d'\n", 1, 22);
	printf("%d %.*s %s\n", 12, 3, "abcdef", "asdfghjk");
	// printf("%hhc %hhc", 1, 'c');
	printf("{cyan}yolo{eoc} {red}zbra{eoc}\n");
	return (0);
}
