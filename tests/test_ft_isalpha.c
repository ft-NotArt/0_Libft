#include "test.h"

void test_ft_isalpha ()
{
	printf("\n\n-- TEST ISALPHA --\n\n") ;


	printf("alpha : ") ;
	if    ((isalpha('F') > 0) == (ft_isalpha('F') > 0 )
		&& (isalpha('f') > 0) == (ft_isalpha('f') > 0 )
		&& (isalpha('A') > 0) == (ft_isalpha('A') > 0 )
		&& (isalpha('a') > 0) == (ft_isalpha('a') > 0 )
		&& (isalpha('Z') > 0) == (ft_isalpha('Z') > 0 )
		&& (isalpha('z') > 0) == (ft_isalpha('z') > 0 ))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("non-alpha : ") ;
	if    ((isalpha('\0') > 0) == (ft_isalpha('\0') > 0 )
		&& (isalpha('0') > 0) == (ft_isalpha('0') > 0 )
		&& (isalpha('\n') > 0) == (ft_isalpha('\n') > 0 )
		&& (isalpha(-54) > 0) == (ft_isalpha(-54) > 0 )
		&& (isalpha(545) > 0) == (ft_isalpha(545) > 0 ))
		printf("✅\n") ;
	else
		printf("❌\n") ;
}