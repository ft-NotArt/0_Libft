#include "test.h"

void test_ft_isalnum ()
{
	printf("\n\n-- TEST ISALNUM --\n\n") ;


	printf("alnum : ") ;
	if    ((isalnum('F') > 0) == (ft_isalnum('F') > 0 )
		&& (isalnum('f') > 0) == (ft_isalnum('f') > 0 )
		&& (isalnum('A') > 0) == (ft_isalnum('A') > 0 )
		&& (isalnum('a') > 0) == (ft_isalnum('a') > 0 )
		&& (isalnum('Z') > 0) == (ft_isalnum('Z') > 0 )
		&& (isalnum('z') > 0) == (ft_isalnum('z') > 0 )
		&& (isalnum('0') > 0) == (ft_isalnum('0') > 0 )
		&& (isalnum('5') > 0) == (ft_isalnum('5') > 0 )
		&& (isalnum('9') > 0) == (ft_isalnum('9') > 0 ))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("non-alnum : ") ;
	if    ((isalnum('\0') > 0) == (ft_isalnum('\0') > 0 )
		&& (isalnum('=') > 0) == (ft_isalnum('=') > 0 )
		&& (isalnum('[') > 0) == (ft_isalnum('[') > 0 )
		&& (isalnum(' ') > 0) == (ft_isalnum(' ') > 0 )
		&& (isalnum('\r') > 0) == (ft_isalnum('\r') > 0 )
		&& (isalnum(-5) > 0) == (ft_isalnum(-5) > 0 )
		&& (isalnum(855) > 0) == (ft_isalnum(855) > 0 ))
		printf("✅\n") ;
	else
		printf("❌\n") ;
}