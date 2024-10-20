#include "test.h"

void test_ft_substr ()
{
	printf("\n\n-- TEST SUBSTR --\n\n") ;

	char *string = "abcdef" ;
	char *sub ;
	char *expected ;

	printf("simple substring : ") ;
	sub = ft_substr(string, 2, 2) ;
	expected = "cd" ;
	for (int i = 0; i < 2; i++)
	{
		if (sub[i] == expected[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;

	printf("len = 0 : ") ;
	sub = ft_substr(string, 2, 0) ;
	if (!*sub)
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("len too big : ") ;
	sub = ft_substr(string, 2, 50) ;
	expected = "cdef" ;
	for (int i = 0; i < 4; i++)
	{
		if (sub[i] == expected[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;

	printf("start too big : ") ;
	sub = ft_substr(string, 50, 2) ;
	if (!*sub)
		printf("✅\n") ;
	else
		printf("❌\n") ;
}