#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"


int main()
{
	//00
	printf("\nEx00 \nString length: %d", ft_strlen("Martin likes chicken with rice"));
	//01
	printf("\n\nEx01 \n");
	ft_putstr("Some random string");
	//02
	printf("\n\nEx02 \n");
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(5);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(15);
	write(1, "\n", 1);
	ft_putnbr(-15);
	write(1, "\n", 1);
	ft_putnbr(-150);
	write(1, "\n", 1);
	ft_putnbr(150);
	write(1, "\n", 1);
	ft_putnbr(15000);
	write(1, "\n", 1);
	ft_putnbr(-38885);
	//03
	printf("\n\nEx03 \n");
	printf("\nMine: %i | Should be: -123 (-123)\n", ft_atoi("-123"));
	printf("\nMine: %i | Should be: 123 (--123)\n", ft_atoi("--123"));
	printf("\nMine: %i | Should be: 123 (123)\n", ft_atoi("123"));
	printf("\nMine: %i | Should be: -12 (-12a3)\n", ft_atoi("-12a3"));
	printf("\nMine: %i | Should be: -1 (-1b23)\n", ft_atoi("-1b23"));
	printf("\nMine: %i | Should be: 0 (  a  -123)\n", ft_atoi("  a  -123"));
	printf("\nMine: %i | Should be: 0 (  -  +-123\n", ft_atoi("  -  +-123"));
	printf("\nMine: %i | Should be: 0 (- -  +-123)\n", ft_atoi(" - -  +-123"));
	printf("\nMine: %i | Should be: -1234 ( ---+--+1234ab567)\n", ft_atoi(" ---+--+1234ab567"));
	printf("\nMine: %i | Should be: 0 ()\n", ft_atoi(""));
	printf("\nMine: %i | Should be: 0 (-------)\n", ft_atoi("-------"));

	return (0);
}
