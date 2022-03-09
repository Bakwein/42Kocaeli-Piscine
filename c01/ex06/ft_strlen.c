#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

int	main(void)
{
	char str[] = "42 Kocaeli";

	int sayac = ft_strlen(str);

	printf("%d\n", sayac);
}
