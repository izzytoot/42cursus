
# include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	lenmine;
	int	lenorig;

	ft_printf("Testar com um int positivo:\n");
	lenmine = ft_printf("%i", 3);
	ft_printf("\n");
	ft_printf("my length: %i.\n", 3);
	lenorig = printf("%i", 3);
	printf("\n");
	printf("original length: %i.\n", 3);
	printf("\n");
	ft_printf("Testar com um int positivo:\n");
	lenmine = ft_printf("%i", 3);
	ft_printf("\n");
	ft_printf("my length: %i.\n", 3);
	lenorig = printf("%i", 3);
	printf("\n");
	printf("original length: %i.\n", 3);
	return (0);
}