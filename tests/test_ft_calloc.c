#include "test.h"

void test_ft_calloc ()
{
	printf("\n\n-- TEST CALLOC --\n\n") ;

	printf("normal usage : ") ;
	if ((calloc(5, 5) == NULL) == (ft_calloc(5, 5) == NULL))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("0 on first param : ") ;
	if ((calloc(0, 5) == NULL) == (ft_calloc(0, 5) == NULL))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("0 on second param : ") ;
	if ((calloc(5, 0) == NULL) == (ft_calloc(5, 0) == NULL))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("0 on both param : ") ;
	if ((calloc(0, 0) == NULL) == (ft_calloc(0, 0) == NULL))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("integer overflow : ") ;
	if ((calloc( 42947295, 42947295) == NULL) == (ft_calloc( 42947295, 42947295) == NULL))
		printf("✅\n") ;
	else
		printf("❌\n") ;
}