/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:26:52 by mumajeed          #+#    #+#             */
/*   Updated: 2024/08/22 11:52:36 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*int	main()
{
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "World";

	printf("Comparing str1 and str2: %d\n", ft_strcmp(str1, str2));
	printf("Comparing str1 and str3: %d\n", ft_strcmp(str1, str3));
	printf("Comparing str3 and str1: %d\n", ft_strcmp(str3, str1));

	return (0);
}*/
