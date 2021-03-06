/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_amount.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-sch <rvan-sch@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/29 19:03:09 by rvan-sch      #+#    #+#                 */
/*   Updated: 2020/01/29 19:03:10 by rvan-sch      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_putchar_amount(char c, int size)
{
	int i;

	i = 0;
	if (size > 0)
	{
		while (i < size)
		{
			ft_putchar(c);
			i++;
		}
		return (size);
	}
	return (0);
}
