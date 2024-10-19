#include "test.h"

void test_ft_isdigit ()
{
	printf("\n\n-- TEST ISDIGIT --\n\n") ;

	printf("digit : ") ;
	if    ((isdigit('0') > 0) == (ft_isdigit('0') > 0 )
		&& (isdigit('5') > 0) == (ft_isdigit('5') > 0 )
		&& (isdigit('9') > 0) == (ft_isdigit('9') > 0 ))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("non-digit : ") ;
	if    ((isdigit('f') > 0) == (ft_isdigit('f') > 0 )
		&& (isdigit('A') > 0) == (ft_isdigit('A') > 0 )
		&& (isdigit('z') > 0) == (ft_isdigit('z') > 0 )
		&& (isdigit('\0') > 0) == (ft_isdigit('\0') > 0 )
		&& (isdigit(-5) > 0) == (ft_isdigit(-5) > 0 )
		&& (isdigit(955) > 0) == (ft_isdigit(955) > 0 ))
		printf("✅\n") ;
	else
		printf("❌\n") ;
}