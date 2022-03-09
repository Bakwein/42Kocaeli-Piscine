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

char    *ft_strcapitalize(char *str)
{
    int    c;
    int    i;

    c = 0;
    i = 0;
    while (str[c] != '\0')
    {
        if (i == 0 && (str[c] >= 'a' && str[c] <= 'z'))
        {
            str[c] -= 32;
            i++;
        }
        else if (i > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
            str[c] += 32;
        else if ((str[c] < '0') || (str[c] > '9' && str[c] < 'A')
            || (str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
            i = 0;
        else
            i++;
        c++;
    }
    return (str);
}

int		main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	char str2[] = " sALuT, ComMenT tu VAS ? 42Mots QUarante-deUX; cinQuantE+ET+un";

	char empty[] = "";

	printf("\n-----\nBEF = %s", str1);
	printf("\nAFT = %s\n", ft_strcapitalize(str1));
	printf("\nBEF = %s", str2);
	printf("\nAFt = %s\n", ft_strcapitalize(str2));
	printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));

}
