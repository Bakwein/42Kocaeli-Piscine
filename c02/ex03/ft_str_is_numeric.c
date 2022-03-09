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

include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char numeric[] = "0123456789";
	char *p_num;
	p_num = numeric;

	char special[] = "0123456789_";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = String contains only numerical chars\n0 = String doesn't contain only numerical chars\n\n");
	printf("%s = %d\n", numeric, ft_str_is_numeric(p_num));
	printf("%s = %d\n", special, ft_str_is_numeric(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_numeric(p_emp));

	return (0);
}
