#include <stdio.h>

int	main()
{
	int rayon;
	printf("Tape la taille Jean Pierre: ");
	scanf("%d", &rayon);

	int x = 0;
	while (x < 2 * rayon - 1)
	{
		int y = 0;
		while (y < 2 * rayon - 1)
		{
			if ((x - rayon + 1) * (x - rayon + 1) + (y - rayon + 1) * (y - rayon + 1) <= rayon * rayon)
			{		
				printf("  ");
			}
			else
			{	
				printf(" ");
			}
			y++;
			}
		printf("\n");
		x++;
	}
return 0;
}
