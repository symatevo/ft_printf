/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrprec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: symatevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 14:12:36 by symatevo          #+#    #+#             */
/*   Updated: 2021/04/03 14:13:09 by symatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_putstrprec(char *str, int prec)
{
	int char_count;

	char_count = 0;
	while (str[char_count] && char_count < prec)
		ft_putchar(str[char_count++]);
	return (char_count);
}
