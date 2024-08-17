/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:54:31 by mumajeed          #+#    #+#             */
/*   Updated: 2024/08/17 14:57:29 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[1] >= '32') && (str[1] <= '126'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{       
	int isprint;
	char a[] = "\n";
	isprint = ft_str_is_printable(a);
	printf("%d\n", isprint);

	return (0);
}*/
