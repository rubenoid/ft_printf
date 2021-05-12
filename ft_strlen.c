/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-sch <rvan-sch@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 19:53:46 by rvan-sch          #+#    #+#             */
/*   Updated: 2019/12/30 23:59:37 by rvan-sch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

size_t	ft_strlen(const char *s)
{
	size_t length;

	length = 0;
	while (s[length])
		length++;
	return (length);
}
