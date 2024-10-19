#include "test.h"

void test_ft_strrchr ()
{
	printf("\n\n-- TEST STRRCHR --\n\n") ;

	printf("simple : ") ;
	if (strrchr("abcdef", 'c') == ft_strrchr("abcdef", 'c'))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("double : ") ;
	if (strrchr("abcdcef", 'c') == ft_strrchr("abcdcef", 'c'))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("absent : ") ;
	if (strrchr("abdef", 'c') == ft_strrchr("abdef", 'c'))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("w/ null char after : ") ;
	if (strrchr("abc\0def", 'c') == ft_strrchr("abc\0def", 'c'))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("searching for null char : ") ;
	if (strrchr("ab\0cdef", '\0') == ft_strrchr("ab\0cdef", '\0'))
		printf("✅\n") ;
	else
		printf("❌\n") ;
}