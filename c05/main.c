#include <stdio.h>
#include <stdlib.h>


------ ex00 ------

int		main()
{
	printf("%d", ft_iterative_factorial(3));
	return (0);
}

------ ex01 ------

int		main()
{
	printf("%d", ft_recursive_factorial(8));
	return (0);
}

------ ex02 ------

int		main(int ac, char **av)
{
	printf("%d\n", ft_iterative_power(atoi(av[1]), atoi(av[ac - 1])));
	return (0);
}

------ ex03 ------

int		main()
{
	printf("%d\n", ft_recursive_power(2, 3));
	return (0);
}

------ ex04 ------

int		main()
{
	printf("Index -2 est = %d\n", ft_fibonacci(-2));
	printf("Index -1 est = %d\n", ft_fibonacci(-1));
	printf("Index 0 est = %d\n", ft_fibonacci(0));
	printf("Index 1 est = %d\n", ft_fibonacci(1));
	printf("Index 2 est = %d\n", ft_fibonacci(2));
	printf("Index 3 est = %d\n", ft_fibonacci(3));
	printf("Index 20 est = %d\n", ft_fibonacci(20));
	printf("Index 45 est = %d\n", ft_fibonacci(45));
}

------ ex05 ------

int		main()
{
	printf("racine carree de 1 = %d\n", ft_sqrt(1));
	printf("racine carree de 4 = %d\n", ft_sqrt(4));
	printf("racine carree de 9 = %d\n", ft_sqrt(9));
	printf("racine carree de 16 = %d\n", ft_sqrt(16));
	printf("racine carree de 36 = %d\n", ft_sqrt(36));
	printf("racine carree de 100 = %d\n", ft_sqrt(100));
	printf("racine carree de 21473956000 = %d\n", ft_sqrt(21473956000));
}

------ ex06 ------

int		main()
{
	printf("-2 nombre premier ? %d\n", ft_is_prime(-2));
	printf("0 nombre premier ? %d\n", ft_is_prime(0));
	printf("1 nombre premier ? %d\n", ft_is_prime(1));
	printf("2 nombre premier ? %d\n", ft_is_prime(2));
	printf("3 nombre premier ? %d\n", ft_is_prime(3));
	printf("4 nombre premier ? %d\n", ft_is_prime(4));
	printf("5 nombre premier ? %d\n", ft_is_prime(5));
	printf("7 nombre premier ? %d\n", ft_is_prime(7));
	printf("10 nombre premier ? %d\n", ft_is_prime(10));
	printf("43 nombre premier ? %d\n", ft_is_prime(43));
	printf("2147483647 nombre premier ? %d\n", ft_is_prime(2147483647));
}
