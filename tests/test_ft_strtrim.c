#include "test.h"

void test_ft_strtrim ()
{
	printf("\n\n-- TEST STRTRIM --\n\n") ;

	char *string = "abcdef" ;
	char *res ;
	char *expected ;

	printf("no trim : ") ;
	res = ft_strtrim(string, "") ;
	expected = "abcdef" ;
	for (int i = 0; i < 7; i++)
	{
		if (res[i] == expected[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;

	printf("start trim : ") ;
	res = ft_strtrim(string, "abc") ;
	expected = "def" ;
	for (int i = 0; i < 4; i++)
	{
		if (res[i] == expected[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;

	printf("end trim : ") ;
	res = ft_strtrim(string, "def") ;
	expected = "abc" ;
	for (int i = 0; i < 4; i++)
	{
		if (res[i] == expected[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;

	printf("start and end trim : ") ;
	res = ft_strtrim(string, "abef") ;
	expected = "cd" ;
	for (int i = 0; i < 3; i++)
	{
		if (res[i] == expected[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;

	printf("empty string : ") ;
	res = ft_strtrim("", "abef") ;
	expected = "" ;
	for (int i = 0; i < 1; i++)
	{
		if (res[i] == expected[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;
}