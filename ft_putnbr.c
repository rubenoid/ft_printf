/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-sch <rvan-sch@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 21:22:27 by rvan-sch          #+#    #+#             */
/*   Updated: 2020/01/03 23:02:00 by rvan-sch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putnbr_ull(unsigned long long n)
{
	if (n > 9)
	{
		ft_putnbr_ull(n / 10);
		ft_putnbr_ull(n % 10);
	}
	else
		ft_putchar(n + '0');
}
