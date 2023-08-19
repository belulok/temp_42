void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		ft_putchar(number + '0');
		number++;
	}
}