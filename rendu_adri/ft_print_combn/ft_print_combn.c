#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_combn(int n)
{
	char c[10];
	int i, j;
	if (n <= 0 || n > 10)
		return;
	i = 0;
	while (i < n)
		{
		c[i] = '0';
		i++;
		}
	while (c[0] <= '9' - n + 1)
	{
		j = 0;
		while (j < n)
		{
		ft_putchar(c[j]);
		j++;
		}
		if (!(c[0] == + '9' - n + 1 && c[n - 1] == '9'))
			write(1, ", ", 2);
			i = n -1;
		while (i >= 0 && c[i] == '9' - (n - 1 - i))
		i--;
			if (i < 0)
			break;
		c[i]++;
		j = i + 1;
		while (j < n)
		{
		c[j] = c[j - 1] + 1;
		j++;
		}
	}
}
int	main(void)
{
	ft_print_combn(2);
	write(1, "\n", 1);
	return 0;
}
