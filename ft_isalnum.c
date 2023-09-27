#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int ft_isalnum(int c)
{
	if ((ft_isdigit(c) == 1 || ft_isalpha(c) == 1))
		return (1);
	return (0);
}

int main(void)
{
	int c = '/';
	printf("%d\n", ft_isalnum(c));
	printf("%d", isalnum(c));
}