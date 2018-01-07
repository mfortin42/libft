/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 15:23:52 by mfortin           #+#    #+#             */
/*   Updated: 2017/12/27 15:24:13 by mfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static char		digit(int nb)
{
	if (nb < 10)
		return ('0' + nb);
	return ('a' + nb % 10);
}

void			ft_putnbr_base(intmax_t nb, int base)
{
	if (nb > 9)
		ft_putnbr_base(nb / base, base);
	ft_putchar(digit(nb % base));
}
