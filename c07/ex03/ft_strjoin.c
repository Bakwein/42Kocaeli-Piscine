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

#include <stdlib.h>

char    *ft_strjoin(int size, char **strs, char *sep)
{
    char    *s;
    int        bir;
    int        iki;
    int        c;

    s = (char *) malloc(sizeof(strs));
    bir = 0;
    c = 0;
    while (bir < size)
    {
        iki = 0;
        while (strs[bir][iki] != '\0')
        {
            s[c++] = strs[bir][iki++];
        }
        iki = 0;
        while (sep[iki] != '\0' && bir != size - 1)
        {
            s[c++] = sep[iki++];
        }
        bir++;
    }
    s[c] = '\0';
    return (s);
}
