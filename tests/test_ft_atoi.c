#include "test.h"

void test_ft_atoi ()
{
	printf("\n\n-- TEST ATOI --\n\n") ;

	printf("just number : ") ;
	if (atoi("42") == ft_atoi("42"))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("positive number : ") ;
	if (atoi("+42") == ft_atoi("+42"))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("negative number : ") ;
	if (atoi("-42") == ft_atoi("-42"))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("double '-' : ") ;
	if (atoi("--42") == ft_atoi("--42"))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("w/ spaces : ") ;
	if (atoi("  \t\r\v\f\n  -42") == ft_atoi("  \t\r\v\f\n  -42"))
		printf("✅\n") ;
	else
		printf("❌\n") ;
	
	printf("w/ garbage at start : ") ;
	if (atoi("  abc  42") == ft_atoi("  abc  42"))
		printf("✅\n") ;
	else
		printf("❌\n") ;
	
	printf("w/ garbage at end : ") ;
	if (atoi("42  abc  ") == ft_atoi("42  abc  "))
		printf("✅\n") ;
	else
		printf("❌\n") ;
	
	printf("empty string : ") ;
	if (atoi("") == ft_atoi(""))
		printf("✅\n") ;
	else
		printf("❌\n") ;
}