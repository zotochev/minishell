/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:51:34 by namerei           #+#    #+#             */
/*   Updated: 2021/01/31 03:20:38 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n)
{
	int		count;

	if (n < 0)
		n *= -1;
	count = 0;
	if (n <= 0)
	{
		count++;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
