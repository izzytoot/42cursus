
# include <stdio.h>
#include "ft_printf.h"
# include <limits.h>

int	main(void)
{
	int	lenmine;
	int	lenorig;

	ft_printf("------------SEM SPEC------------\n");
	lenmine = ft_printf("TeeeSSSSttttAAAArrr Mandatory AAArrrGGG.\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("TeeeSSSSttttAAAArrr Mandatory AAArrrGGG.\n");
	printf("original length: %d.\n", lenorig);

	printf("\n");
	
	lenmine = ft_printf("t");
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("t");
	printf("\n");
	printf("original length: %d.\n", lenorig);

	printf("\n");
	
	ft_printf("------------%%c------------\n");
	ft_printf("Testar com um char maiusculo (C):\n");
	lenmine = ft_printf("%c", 'C');
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%c", 'C');
	printf("\n");
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Testar com um char minúsculo (c):\n");
	lenmine = ft_printf("%c", 'c');
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%c", 'c');
	printf("\n");
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Testar com um char com nulo:\n");
	lenmine = ft_printf("%c", '\0');
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%c", '\0');
	printf("\n");
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Testar com '0' + 256:\n");
	lenmine = ft_printf("%c", '0' + 256);
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%c", '0' + 256);
	printf("\n");
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Testar com '1', '2', '3':\n");
	lenmine = ft_printf("%c %c %c", '1', '2', '3');
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%c %c %c", '1', '2', '3');
	printf("\n");
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Testar com '3', '2', 1:\n");
	lenmine = ft_printf("%c %c %c", '3', '2', 1);
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%c %c %c", '3', '2', 1);
	printf("\n");
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Testar com ' ', ' ', ' ':\n");
	lenmine = ft_printf("%c %c %c", ' ', ' ', ' ');
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%c %c %c", ' ', ' ', ' ');
	printf("\n");
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Testar com '0', 0, '1':\n");
	lenmine = ft_printf("%c %c %c", '0', 0, '1');
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%c %c %c", '0', 0, '1');
	printf("\n");
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("------------%%s------------\n");

	ft_printf("Testar com (HELLO):\n");
	lenmine = ft_printf("%s", "HELLO");
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%s", "HELLO");
	printf("\n");
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Testar com (hello):\n");
	lenmine = ft_printf("%s", "hello");
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%s", "hello");
	printf("\n");
	printf("original length: %i.\n", lenorig);

	printf("\n");
	
	ft_printf("Testar com (muitas letras):\n");
	lenmine = ft_printf("%s", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab");
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%s", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab");
	printf("\n");
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Testar com sinais diferentes:\n");
	lenmine = ft_printf("%s", "Let's !! TEST this..");
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%s", "Let's !! TEST this..");
	printf("\n");
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Testar com string vazia:\n");
	lenmine = ft_printf("%s", "");
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%s", "");
	printf("\n");
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Testar com varios chars:\n");
	lenmine = ft_printf("%s %s %s", "-", "4", "2");
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%s %s %s", "-", "4", "2");
	printf("\n");
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Testar com NULL:\n");
	char	*null = NULL;
	lenmine = ft_printf("%s", null);
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%s", null);
	printf("\n");
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("------------%%p------------\n");
	ft_printf("Testar com ptr (c):\n");
	char	*ptr = "c";
	lenmine = ft_printf("%p", ptr);
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%p", ptr);
	printf("\n");
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");
	
	ft_printf("Testar com ptr (NULL):\n");
	char	*ptr_null = NULL;
	lenmine = ft_printf("%p", ptr_null);
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%p", ptr_null);
	printf("\n");
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");

	ft_printf("Testar com ptr p/ negativo:\n");
	lenmine = ft_printf("%p", (void *)-2);
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%p", (void *)-2);
	printf("\n");
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");

	ft_printf("Testar com ptr p/ positivo:\n");
	lenmine = ft_printf("%p", (void *)15);
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%p", (void *)15);
	printf("\n");
	printf("original length: %i.\n", lenorig);
	
	ft_printf("\n");

	ft_printf("Testar com ptr p/ INT_MIN:\n");
	lenmine = ft_printf("%p", (void *) INT_MIN);
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%p", (void *)INT_MIN);
	printf("\n");
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");

	ft_printf("Testar com ptr p/ INT_MAX:\n");
	lenmine = ft_printf("%p", (void *)INT_MAX);
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%p", (void *)INT_MAX);
	printf("\n");
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");

	ft_printf("Testar com ptr p/ LONG_MIN:\n");
	lenmine = ft_printf("%p", (void *)LONG_MIN);
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%p", (void *)LONG_MIN);
	printf("\n");
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");

	ft_printf("Testar com ptr p/ LONG_MAX:\n");
	lenmine = ft_printf("%p", (void *)LONG_MAX);
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%p", (void *)LONG_MAX);
	printf("\n");
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");

	ft_printf("Testar com ptr p/ ULONG_MAX:\n");
	lenmine = ft_printf("%p", (void *)ULONG_MAX);
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%p", (void *)ULONG_MAX);
	printf("\n");
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");

	ft_printf("Testar com ptr p/ -ULONG_MAX:\n");
	lenmine = ft_printf("%p", (void *)ULLONG_MAX);
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%p", (void *)ULLONG_MAX);
	printf("\n");
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");

	ft_printf("Testar com ptr p/ LONG_MAX:\n");
	lenmine = ft_printf("%p %p", (void*)0, (void*)0);
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%p %p", (void*)0, (void*)0);
	printf("\n");
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");

	ft_printf("------------%%i/%%d------------\n");
	ft_printf("Testar com um int positivo (32):\n");
	lenmine = ft_printf("%i", 32);
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%i", 32);
	printf("\n");
	printf("original length: %i.\n", lenorig);
	
	printf("\n");
	
	ft_printf("Testar com um int negativo (-54):\n");
	lenmine = ft_printf("%d", -54);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%d", -54);
	printf("\n");
	printf("original length: %d.\n", lenorig);
	
	printf("\n");
	
	ft_printf("Testar com o INT_MIN:\n");
	lenmine = ft_printf("%i", -2147483648);
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%i", -2147483648);
	printf("\n");
	printf("original length: %i.\n", lenorig);
	
	printf("\n");
	
	ft_printf("Testar com o INT_MAX:\n");
	lenmine = ft_printf("%d", 2147483647);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%d", 2147483647);
	printf("\n");
	printf("original length: %d.\n", lenorig);
	
	printf("\n");
	
	ft_printf("Testar com 0:\n");
	lenmine = ft_printf("%i", 0);
	ft_printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	lenorig = printf("%i", 0);
	printf("\n");
	printf("original length: %i.\n", lenorig);
	
	printf("\n");

	ft_printf("------------%%u------------\n");
	
	ft_printf("Testar com um unsigned positivo (54):\n");
	lenmine = ft_printf("%u", 54);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%u", 54);
	printf("\n");
	printf("original length: %d.\n", lenorig);
	
	printf("\n");
	
	ft_printf("Testar com um unsigned negativo(54):\n");
	lenmine = ft_printf("%u", -54);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%u", -54);
	printf("\n");
	printf("original length: %d.\n", lenorig);
	
	printf("\n");
	
	ft_printf("Testar unsigned 0:\n");
	lenmine = ft_printf("%u", 0);
	ft_printf("\n");
	ft_printf("my length: %D.\n", lenmine);
	lenorig = printf("%u", 0);
	printf("\n");
	printf("original length: %d.\n", lenorig);
	
	printf("\n");
	
	ft_printf("Testar com um unsigned com letra:\n");
	lenmine = ft_printf("%u", 4294967295u);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%u", 4294967295u);
	printf("\n");
	printf("original length: %d.\n", lenorig);
	
	ft_printf("\n");
	
	ft_printf("Testar com um unsigned INT_MAX:\n");
	lenmine = ft_printf("%u", 2147483647);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%u",  2147483647);
	printf("\n");
	printf("original length: %d.\n", lenorig);
	
	ft_printf("\n");
	
	ft_printf("Testar com um unsigned INT_MIN:\n");
	lenmine = ft_printf("%u", -2147483648);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%u",  -2147483648);
	printf("\n");
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");
	ft_printf("------------%%x/%%X------------\n");
	
	ft_printf("Testar com um low hexa positivo (456):\n");
	lenmine = ft_printf("%x", 456);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%x",  456);
	printf("\n");
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Testar com um upper hexa positivo (456):\n");
	lenmine = ft_printf("%X", 456);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%X",  456);
	printf("\n");
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Testar com um low hexa negativo (-456):\n");
	lenmine = ft_printf("%x", -456);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%x",  -456);
	printf("\n");
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Testar com um upper hexa negativo (-456):\n");
	lenmine = ft_printf("%X", -456);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%X",  -456);
	printf("\n");
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Testar com um low hexa c/ letra (4294967293u):\n");
	lenmine = ft_printf("%x", 4294967293u);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%x",  4294967293u);
	printf("\n");
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Testar com um upper hexa c/ letra (4294967293u):\n");
	lenmine = ft_printf("%X", 4294967293u);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%X",  4294967293u);
	printf("\n");
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Testar com um low hexa positivo baixo (1):\n");
	lenmine = ft_printf("%x", 1);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%x",  1);
	printf("\n");
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Testar com um upper hexa positivo baixo (1):\n");
	lenmine = ft_printf("%X", 1);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%X",  1);
	printf("\n");
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Testar com um low hexa negativo baixo (-1):\n");
	lenmine = ft_printf("%x", -1);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%x",  -1);
	printf("\n");
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Testar com um upper hexa negativo baixo (-1):\n");
	lenmine = ft_printf("%X", -1);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%X",  -1);
	printf("\n");
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Testar com um low hexa INT_MAX:\n");
	lenmine = ft_printf("%x", 2147483647);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%x",  2147483647);
	printf("\n");
	printf("original length: %d.\n", lenorig);
	
	ft_printf("\n");
	
	ft_printf("Testar com um upper hexa INT_MIN:\n");
	lenmine = ft_printf("%X", -2147483648);
	ft_printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	lenorig = printf("%X",  -2147483648);
	printf("\n");
	printf("original length: %d.\n", lenorig);
*/
	return (0);
}