/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:05:31 by mumajeed          #+#    #+#             */
/*   Updated: 2024/08/18 14:27:13 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*int	main()
{
	char str1[] = "Hello";
	char str2[] = "Helium";
	char str3[] = "Hell";

	printf("Comparando str1 y str2 hasta 3 caracteres: %d\n", ft_strncmp(str1, str2, 3));
	printf("Comparando str1 y str2 hasta 4 caracteres: %d\n", ft_strncmp(str1, str2, 4));
	printf("Comparando str1 y str3 hasta 5 caracteres: %d\n", ft_strncmp(str1, str3, 5));

	return (0);
}*/
