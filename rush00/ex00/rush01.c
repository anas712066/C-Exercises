/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajeed- <mmajeed-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:09:02 by mmajeed-          #+#    #+#             */
/*   Updated: 2024/07/07 14:45:25 by abermejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int xv, int yv, int x, int y)
{
	if ((xv == 1 && yv == 1) || (xv == x && yv == y && x != 1 && y != 1))
	{
		ft_putchar('/');
	}
	else if ((xv == x && yv == 1) || (xv == 1 && yv == y))
	{
		ft_putchar('\\');
	}
	else if (yv == 1 || yv == y)
	{
		ft_putchar('*');
	}
	else if (xv == 1 || xv == x)
	{
		ft_putchar('*');
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
