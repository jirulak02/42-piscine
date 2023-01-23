#include <stdio.h>

#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

int	main(void)
{
	//ex00
	printf("ex00:\n");
	printf("%d\n", ft_iterative_factorial(-20));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial('A'));
	
	//ex01
	printf("\nex01:\n");
	printf("%d\n", ft_recursive_factorial(-20));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(5));
	printf("%d\n", ft_recursive_factorial('A'));
	
	//ex02
	printf("\nex02:\n");
	printf("%d\n", ft_iterative_power(5, -2));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(10, 0));
	printf("%d\n", ft_iterative_power(2, 5));
	
	//ex03
	printf("\nex03:\n");
	printf("%d\n", ft_recursive_power(5, -2));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(10, 0));
	printf("%d\n", ft_recursive_power(2, 5));
	
	//ex04
	printf("\nex04:\n");
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(6));
	printf("%d\n", ft_fibonacci(-10));
	
	//ex05
	printf("\nex05:\n");
	printf("%d\n", ft_sqrt(-4));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(24));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(496844100));
	
	//ex06
	printf("\nex06:\n");
	printf("%d\n", ft_is_prime(-4));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(2147483647));
	
	//ex07
	printf("\nex07:\n");
	printf("%d\n", ft_find_next_prime(-4));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(11));
	printf("%d\n", ft_find_next_prime(248303));
	printf("%d\n", ft_find_next_prime(2147483631));
	
	return (0);
}
