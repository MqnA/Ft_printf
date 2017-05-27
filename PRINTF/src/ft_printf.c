/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 16:06:30 by mavagner          #+#    #+#             */
/*   Updated: 2017/02/25 16:11:57 by jedavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int			ft_printf(const char *format, ...)
{
	int		index;
	char	*cpy;
	va_list	av;

	va_start(av, format);
	cpy = (char*)format;
	index = ft_display(&cpy, av);
	va_end(av);
	return (index);
}
