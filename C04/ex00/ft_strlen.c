/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:02:17 by mumajeed          #+#    #+#             */
/*   Updated: 2024/08/22 12:11:02 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*int	main(void)
{
	char str1[] = "Hola mundo precioso!";
	char str2[] = "";
	char str3[] = "42";

	printf("Tamano de '%s': %d\n", str1, ft_strlen(str1));
	printf("Tamano de un string vacio: %d\n", ft_strlen(str2));
	printf("Tamano de '%s': %d\n", str3, ft_strlen(str3));

	return (0);
}*/
