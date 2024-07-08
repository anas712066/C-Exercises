/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvives-s <mvives-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:53:35 by mvives-s          #+#    #+#             */
/*   Updated: 2024/07/07 14:36:17 by abermejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int xv, int yv, int x, int y)
{
	if ((xv == 1 && yv == 1) || (xv == x && yv == 1))
	{
		ft_putchar('o');
	}
	else if ((xv == 1 && yv == y) || (xv == x && yv == y))
	{
		ft_putchar('o');
	}
	else if (yv == 1 || yv == y)
	{
		ft_putchar('-');
	}
	else if (xv == 1 || xv == x)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	xv;
	int	yv;

	if (xv < 0 && yv < 0)
	{
	}
	else
	{
		yv = 1;
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
