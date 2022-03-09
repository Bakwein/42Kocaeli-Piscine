/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stunca <stunca@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 14:18:20 by stunca            #+#    #+#             */
/*   Updated: 2021/11/28 14:18:23 by stunca           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

/*
int main()
{
    char s;
    
    s = 's';
    ft_putchar('a');
    write(1, "\n", 1);
    ft_putchar(s);
}
*/