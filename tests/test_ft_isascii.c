#include "test.h"

void test_ft_isascii ()
{
	printf("\n\n-- TEST ISASCII --\n\n") ;


	printf("ascii : ") ;
	if    ((isascii('f') > 0) == (ft_isascii('f') > 0 )
		&& (isascii('A') > 0) == (ft_isascii('A') > 0 )
		&& (isascii('z') > 0) == (ft_isascii('z') > 0 )
		&& (isascii('0') > 0) == (ft_isascii('0') > 0 )
		&& (isascii('\0') > 0) == (ft_isascii('\0') > 0 )
		&& (isascii('\n') > 0) == (ft_isascii('\n') > 0 )
		&& (isascii(5) > 0) == (ft_isascii(5) > 0 ))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("non-ascii : ") ;
	if    ((isascii(8453) > 0) == (ft_isascii(8453) > 0 )
		&& (isascii(-84) > 0) == (ft_isascii(-84) > 0 ))
		printf("✅\n") ;
	else
		printf("❌\n") ;
}