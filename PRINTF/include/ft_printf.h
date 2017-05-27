/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavagner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 15:28:01 by mavagner          #+#    #+#             */
/*   Updated: 2017/03/01 22:20:42 by jedavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../LIBFT/libft.h"
# include <stdarg.h>

# define FLAGS "#- +0"
# define L_MOD "hljz"

typedef struct			s_data
{
	int					neg;
	int					pos;
	int					zero;
	int					wildcard;
	int					sharp;
	int					prec;
	int					prec_ok;
	int					space;
	int					width_min;
	int					ret;
	enum
	{
		none,
		l,
		ll,
		h,
		hh,
		j,
		z
	}					l_mod;
}						t_data;

int						ft_printf(const char *format, ...);
int						ft_printf_itoa(intmax_t n, t_data *flag);
int						ft_printf_itoa_base(uintmax_t n, int base,
						t_data *flag, char c);
int						ft_printf_p(unsigned long n, t_data *flag);
int						ft_printf_c(char c, t_data *flag);
int						ft_printf_s(char *str, t_data *flag);
int						ft_printf_dioux(va_list av, char c, t_data *flag);
int						ft_printf_percent(t_data *flag);
int						ft_check_conv(va_list av, char c, t_data *flag);
int						ft_display(char **format, va_list av);
void					ft_init_struct(t_data *flag);
void					ft_init_enum(char **format, t_data *flag);
void					ft_init_prec(char **format, t_data *flag);
void					ft_init_width(char **format, t_data *flag);
void					ft_init_flag(char **format, t_data *flag);
intmax_t				ft_cast_lmod_di(va_list arg, t_data *flag);
uintmax_t				ft_cast_lmod_oux(va_list arg, t_data *flag);

#endif
