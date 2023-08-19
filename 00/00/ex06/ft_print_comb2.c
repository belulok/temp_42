void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int first_number;
	int second_number;

	first_number = 0;
	while (first_number < 99)
	{
		second_number = first_number + 1;
		while (second_number <= 99)
		{
			ft_putchar(first_number / 10 + '0');
			ft_putchar(first_number % 10 + '0');
			ft_putchar(' ');
			ft_putchar(second_number / 10 + '0');
			ft_putchar(second_number % 10 + '0');
			if (first_number != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second_number++;
		}
		first_number++;
	}
}