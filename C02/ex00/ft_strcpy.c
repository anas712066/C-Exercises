/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:59:28 by mumajeed          #+#    #+#             */
/*   Updated: 2024/08/15 15:07:29 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char src[] = "Hola, mundo!";
	char dest[50];
	
	ft_strcpy(dest, src);
	
	printf("Cadena de origen (src): %s\n", src);
	printf("Cadena de destino (dest): %s\n", dest);
	
	return (0);
}*/
