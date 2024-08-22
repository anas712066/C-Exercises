/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:32:31 by mumajeed          #+#    #+#             */
/*   Updated: 2024/08/22 11:50:30 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	r;

	i = 0;
	j = 0;
	r = 0;
	while (dest[i])
		i++;
	while (src[r])
		r++;
	if (size <= i)
		r += size;
	else
		r += i;
	while (src[j] && i + 1 < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (r);
}
/*int	main(void)
{
	char dest[20] = "Hola";
	char src[] = "mundo!";
	unsigned int size = 15;
	unsigned int result;

	printf("Before strlcat: \n");
	printf("dest = '%s'\n", dest);
	printf("src = '%s'\n", src);
	printf("size = %u\n", size);

	result = ft_strlcat(dest, src, size);

	printf("\nAfter strlcat:\n");
	printf("dest = '%s'\n", dest);
	printf("Length = %u\n", result);

	return (0);
}*/
/*int	main(void)
{
	char dest[20] = "Hello";
	char src[] = " World!";
	unsigned int size = 15;

	printf("Resulting length: %u\n", ft_strlcat(dest, src, size));
	printf("Final dest: %s\n", dest);

	return 0;
}*/
