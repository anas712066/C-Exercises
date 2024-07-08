/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajeed- <mmajeed-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:14:26 by mmajeed-          #+#    #+#             */
/*   Updated: 2024/07/07 10:16:08 by mmajeed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	x;

	x = '0';
	while (x <= '9')
	{
		write(1, &x, 1);
		x++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
