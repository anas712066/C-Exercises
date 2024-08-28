/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajeed- <mmajeed-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:27:59 by mmajeed-          #+#    #+#             */
/*   Updated: 2024/07/08 14:44:48 by mmajeed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			write (1, (a / 10) + '0', 1);
			write (1, (a % 10) + '0', 1);
			write (1, " ", 1);
			write (1, (b / 10) + '0', 1);
			write (1, (b % 10) + '0', 1);
			if (a != 98)
				write (1, ", ", 2);
		}
		b++;
	}
	a++;
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
