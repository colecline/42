/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccline <ccline@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 16:46:31 by ccline            #+#    #+#             */
/*   Updated: 2019/10/05 10:23:26 by ccline           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intsize(int n)
{
	int size;

	size = 0;
	size = (n <= 0 ? 1 : 0);
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}