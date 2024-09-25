/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:21:25 by mumajeed          #+#    #+#             */
/*   Updated: 2024/08/17 13:42:09 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str [i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	main(void)
{
	int is_alpha;
	char a[] = "abcdef3eu45";
	is_alpha = ft_str_is_alpha(a);
	printf("%d\n", is_alpha);
	
	return (0);
}*/
