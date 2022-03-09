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

#include <unistd.h>
#include <stdio.h>

char *ft_strupcase(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -=32;
        i++;
    }
    return (str);
}

int        main(void)
{
    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    char *p_lwr;
    p_lwr = lowercase;

    char allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *p_all;
    p_all = allcases;

    char empty[] = "";
    char *p_emp;
    p_emp = empty;

    printf("\n-----\n%s = ", lowercase);
    printf("%s\n", ft_strupcase(p_lwr));
    printf("%s = ", allcases);
    printf("%s\n", ft_strupcase(p_all));
    printf("Empty = %s\n-----\n", ft_strupcase(p_emp));

}
