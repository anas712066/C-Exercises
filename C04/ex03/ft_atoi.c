/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:04:06 by mumajeed          #+#    #+#             */
/*   Updated: 2024/08/27 14:05:37 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sum;
	int	sign;

	sign = 1;
	sum = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		sum = (sum * 10) + *str - '0';
		str++;
	}
	return (sum * sign);
}
/*#include <stdio.h>

int	main(void)
{
	char str1[] = "   12345";
	char str2[] = "   -6789";
	char str3[] = "   +42";
	char str4[] = "   00123";
	char str5[] = "   -0";
	char str6[] = "42abc";

	printf("El valor convertido de '%s' es: %d\n", str1, ft_atoi(str1));
	printf("El valor convertido de '%s' es: %d\n", str2, ft_atoi(str2));
	printf("El valor convertido de '%s' es: %d\n", str3, ft_atoi(str3));
	printf("El valor convertido de '%s' es: %d\n", str4, ft_atoi(str4));
	printf("El valor convertido de '%s' es: %d\n", str5, ft_atoi(str5));
	printf("El valor convertido de '%s' es: %d\n", str6, ft_atoi(str6));

	return (0);
}*/
