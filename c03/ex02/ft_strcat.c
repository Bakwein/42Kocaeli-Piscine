/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stunca <stunca@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 14:20:29 by stunca            #+#    #+#             */
/*   Updated: 2021/11/28 14:20:32 by stunca           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int a;

	a = 0;
	while (*str != '\0')
	{
		a++;
		str++;
	}
	return(a);
}

char *ft_strcat(char *dest, char *src)
{
	int c;

	c = ft_strlen(dest);
	while(*src != '\0')
	{
		dest[c] = *src;
		c++;
		src++;
	}
	dest[c] = '\0';
	return (dest);
}

int		main(void)
{
	char dest[20] = "sefa";
	char src[] = "merhaba!";

	ft_strcat(dest, src);
	printf("%s", dest);

	return (0);
}
