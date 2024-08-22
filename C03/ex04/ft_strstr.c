/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:30:48 by mumajeed          #+#    #+#             */
/*   Updated: 2024/08/21 14:19:18 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char str[] = "Hola, este es un ejemplo de búsqueda";
	char to_find[] = "hoy";

	char *result = ft_strstr(str, to_find);

	if (result != 0)
	{
		printf("Subcadena encontrada: %s\n", result);
	}
	else
	{
	printf("Subcadena no encontrada.\n");
	}
	return (0);
}*/
