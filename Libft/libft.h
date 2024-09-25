/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:53:12 by mumajeed          #+#    #+#             */
/*   Updated: 2024/09/25 21:41:16 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

int		    ft_isalnum(int c);
int		    ft_isdigit(int c);
int		    ft_isalpha(int c);
int		    ft_isprint(int c);
int	        ft_isascii(int c);
size_t		ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);

#endif
