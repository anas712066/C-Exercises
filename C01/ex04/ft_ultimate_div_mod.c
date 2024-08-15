/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:54:12 by mumajeed          #+#    #+#             */
/*   Updated: 2024/08/13 16:10:50 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
/*int	main()
{
	int	a;
	int	b;

	a = 4;
	b = 2;

	printf("a : %d, b : %d\n", a, b);

	ft_ultimate_div_mod(&a, &b);

	printf("a : %d, b : %d\n", a, b);

	return (0);
}*/
