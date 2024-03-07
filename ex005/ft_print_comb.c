#include <unistd.h>

void	ft_print_comb(void)
	{
	char c = '0';
		while (c <= '7')
		{
		char d = c + 1;
			while (d <= '8')
			{
			char e = d + 1;
				while (e <= '9')
				{
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, &e, 1);
				if (!(c == '7' && d == '8' && e == '9'))
					write(1, ", ", 2);
			e++;
		}
		d++;
	}
	c++;
	}
}
int	main(void)
{
	ft_print_comb();
	return 0;
}
