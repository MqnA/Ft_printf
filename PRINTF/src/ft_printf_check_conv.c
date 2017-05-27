/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 12:02:19 by mavagner          #+#    #+#             */
/*   Updated: 2017/02/25 16:20:48 by jedavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_check_conv(va_list av, char c, t_data *flag)
{
	if (ft_strchr("diouxX", c))
		return (ft_printf_dioux(av, c, flag));
	else if (c == 's')
		return (ft_printf_s(va_arg(av, char*), flag));
	else if (c == 'c')
		return (ft_printf_c(va_arg(av, int), flag));
	else if (c == '%')
		return (ft_printf_percent(flag));
	else if (ft_strchr("DOU", c))
	{
		flag->l_mod = l;
		return (ft_printf_dioux(av, ft_tolower(c), flag));
	}
	else if (c == 'p')
		return (ft_printf_p(va_arg(av, unsigned long), flag));
	else if (ft_isalpha(c))
		return (ft_printf_c(c, flag));
	else
		return (0);
}
