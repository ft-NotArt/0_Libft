#include "test.h"

void test_ft_strchr ()
{
	printf("\n\n-- TEST STRCHR --\n\n") ;

	printf("simple : ") ;
	if (strchr("abcdef", 'c') == ft_strchr("abcdef", 'c'))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("double : ") ;
	if (strchr("abcdcef", 'c') == ft_strchr("abcdcef", 'c'))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("absent : ") ;
	if (strchr("abdef", 'c') == ft_strchr("abdef", 'c'))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("w/ null char before : ") ;
	if (strchr("ab\0cdef", 'c') == ft_strchr("ab\0cdef", 'c'))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("searching for null char : ") ;
	if (strchr("ab\0cdef", '\0') == ft_strchr("ab\0cdef", '\0'))
		printf("✅\n") ;
	else
		printf("❌\n") ;
}