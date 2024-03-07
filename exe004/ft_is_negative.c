#include <stdio.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		printf("N\n");
	}
	else
	{
		printf("P\n");
	}
}

int	main()
{
	ft_is_negative(-5);
	ft_is_negative(0);
	ft_is_negative(10);
	return 0;
}
