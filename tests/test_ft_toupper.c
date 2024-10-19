#include "test.h"

void test_ft_toupper ()
{
	printf("\n\n-- TEST TOUPPER --\n\n") ;

	printf("min -> maj : ") ;
	if    (toupper('a') == ft_toupper('a')
		&& toupper('c') == ft_toupper('c')
		&& toupper('z') == ft_toupper('z'))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("maj -> maj : ") ;
	if    (toupper('A') == ft_toupper('A')
		&& toupper('C') == ft_toupper('C')
		&& toupper('Z') == ft_toupper('Z'))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("non-letters : ") ;
	if    (toupper(' ') == ft_toupper(' ')
		&& toupper('5') == ft_toupper('5')
		&& toupper(0) == ft_toupper(0))
		printf("✅\n") ;
	else
		printf("❌\n") ;
}