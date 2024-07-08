/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvives-s <mvives-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:44:04 by mvives-s          #+#    #+#             */
/*   Updated: 2024/07/07 14:58:03 by abermejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	f_processing(int x, int y, int xv, int yv)
{
	if ((xv == 1 && yv == 1) || (xv == x && yv == 1))
	{
		if (yv == y && yv != 1)
			ft_putchar('C');
		else
			ft_putchar('A');
	}
	else if ((xv == 1 && yv == y) || (xv == x && yv == y))
	{
		if (yv == y && yv != 1)
			ft_putchar('C');
		else
			ft_putchar('A');
	}
	else if (yv == 1 || yv == y)
		ft_putchar('B');
	else if (xv == 1 || xv == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
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
				f_processing(x, y, xv, yv);
				xv = xv + 1;
			}
			ft_putchar('\n');
			yv = yv + 1;
		}
	}
}
