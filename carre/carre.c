#include <stdio.h>

int	main(int argc, char *argv[])
{
	int cote, x, y;	
	printf("Entrez la taille du carre: ");
	scanf("%d", &cote);
	if (cote <= 1)
	{
		printf("La taille doit etre sup à 1.\n");
		return 1;
	}
	x = 0;
	while (x < cote) 
	{
		y = 0;
		while (y < cote)
		{
	
			if (x == 0 || x == cote -1 || y == 0 || y == cote -1)
			{	
				printf(" ");
			}
			else
			{
				printf("  ");
			}
			y++;
		}
		printf("\n");
		x++;
	}
return 0;
}

