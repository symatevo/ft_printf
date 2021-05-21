/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_tolower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: symatevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 14:13:31 by symatevo          #+#    #+#             */
/*   Updated: 2021/04/03 14:17:04 by symatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_str_tolower(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		str[i] = ft_tolower(str[i]);
	return (str);
}
