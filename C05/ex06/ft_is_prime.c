/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:58:58 by mumajeed          #+#    #+#             */
/*   Updated: 2024/08/28 14:06:59 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= 46340 && i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		++i;
	}
	return (1);
}
#include <stdio.h>

int	main()
{
	int number = 18;

	if (ft_is_prime(number))
		printf("%d es un numero pirmo.\n", number);
	else
		printf("%d no es un numero primo.\n", number);

	return (0);
}
