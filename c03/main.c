ex00

int		main(void)
{
	char c[] = "15";
	char d[] = "11";
	printf("%d", ft_strcmp (c, d));
}

ex01

int main(void)
{
	char c[] = "1";
	char d[] = "6";
	char n = 15;
	printf("%d\n", ft_strncmp(c, d, n));
}

ex02

int		main(void)
{
	char i[] = "1";
	char j[] = "6";
	printf("%s", ft_strcat(i, j));
}

ex03

int		main(void)
{
	char str[] = "abcdef";
	char to_find[] = "adef";
	int n = 2;
	printf("%s", ft_strncat(str, to_find, 2));
}

ex04

int main () {
	char i[] = "HeyCommentCaVa";
	char j[] = "Ca";
	char *ret;

	ret = ft_strstr(i, j);

	printf("%s", ft_strstr(i, j));

	return(0);
}

ex05


