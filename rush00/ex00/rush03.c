/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvives-s <mvives-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:54:55 by mvives-s          #+#    #+#             */
/*   Updated: 2024/07/06 19:55:01 by mvives-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int xv, int yv, int x, int y)
{
	if ((xv == 1 && yv == 1) || (yv == y && xv == 1))
	{
		ft_putchar('A');
	}
	else if (((xv == x) && (yv == 1)) || ((xv == x) && (yv == y)))
	{
		ft_putchar('C');
	}
	else if (((xv == 1) && (y > 1)) || ((yv == 1) && (x > 1)))
	{
		ft_putchar('B');
	}
	else if (((xv == x) && (y > 1)) || ((yv == y) && (x > 1)))
	{
		ft_putchar('B');
	}
	else if ((xv > 1 && xv != x) || (yv > 1 && yv != y))
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	xv;
	int	yv;

	yv = 1;
	if (xv < 0 && yv < 0)
	{
	}
	else
	{
		while (yv <= y)
		{
			xv = 1;
			while (xv <= x)
			{
				print_char(xv, yv, x, y);
				xv++;
			}
			ft_putchar('\n');
			yv++;
		}
	}
}
