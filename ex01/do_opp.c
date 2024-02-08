#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int		nombre1;
	char	operation;
	int		nombre2;
	int		resultat;

	char buffer[20]; // pourquoi buffer[20] et pas 42 ou 100000, faut essayer d'éviter les valeurs magiques
	if (argc != 4) // bien vue t'as protéger les erreurs de inputs
	{
		fprintf(stderr, "Usage: %s <nombre1> <operation> <nombre2>/n", argv[0]);
			// c'est \n pour retour a la ligne
		return (1);
	}
	nombre1 = atoi(argv[1]);
	operation = argv[2][0];
	nombre2 = atoi(argv[3]);
	switch (operation) // c'est le bon choix pour ce genre de problèmes
	{
	case '+':
		resultat = nombre1 + nombre2;
		break ;
	case '-':
		resultat = nombre1 - nombre2;
		break ;
	case '*':
		resultat = nombre1 * nombre2;
		break ;
	case '/':
		if (nombre2 == 0) // on divise pas par 0 ici, on est pas fou
		{
			fprintf(stderr, "Erreur: Division par zero.\n");
			return (1);
		}
		resultat = nombre1 / nombre2;
		break ;
	default:
		fprintf(stderr, "Erreur: Operation non reconnue.\n"); // bien vue
		return (1);
	}
	snprintf(buffer, sizeof(buffer), "%d", resultat);
		// au moins t'as vue des truc bizare comme stderr
	puts(buffer);
	return (0);
}
