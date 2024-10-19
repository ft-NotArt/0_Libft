#include "test.h"

void test_ft_isprint ()
{
	printf("\n\n-- TEST ISPRINT --\n\n") ;


	printf("printable : ") ;
	if    ((isprint('f') > 0) == (ft_isprint('f') > 0 )
		&& (isprint('A') > 0) == (ft_isprint('A') > 0 )
		&& (isprint(' ') > 0) == (ft_isprint(' ') > 0 )
		&& (isprint(']') > 0) == (ft_isprint(']') > 0 )
		&& (isprint('0') > 0) == (ft_isprint('0') > 0 ))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("non-printable : ") ;
	if    ((isprint('\0') > 0) == (ft_isprint('\0') > 0 )
		&& (isprint('\n') > 0) == (ft_isprint('\n') > 0 ))
		printf("✅\n") ;
	else
		printf("❌\n") ;
}