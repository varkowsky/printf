/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   params.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 23:00:30 by ebaudet           #+#    #+#             */
/*   Updated: 2019/01/31 19:35:58 by ebaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_params	*params_init(t_params *params)
{
	ft_memset(params, 0, sizeof(*params));
	params->precision = -1;
	return (params);
}
