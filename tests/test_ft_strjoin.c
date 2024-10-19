#include "test.h"

void test_ft_strjoin ()
{
	printf("\n\n-- TEST STRJOIN --\n\n") ;

	char *join ;
	char * expected ;

	printf("simple strings : ") ;
	join = ft_strjoin("abc", "def") ;
	expected = "abcdef\0" ;
	for (int i = 0; i < 7; i++)
	{
		if (join[i] == expected[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;

	printf("first string empty : ") ;
	join = ft_strjoin("", "def") ;
	expected = "def\0" ;
	for (int i = 0; i < 4; i++)
	{
		if (join[i] == expected[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;

	printf("second string empty : ") ;
	join = ft_strjoin("abc", "") ;
	expected = "abc\0" ;
	for (int i = 0; i < 4; i++)
	{
		if (join[i] == expected[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;

	printf("both string empty : ") ;
	join = ft_strjoin("", "") ;
	expected = "\0" ;
	if (*join == *expected)
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("w/ null char on first string : ") ;
	join = ft_strjoin("ab\0c", "def") ;
	expected = "abdef\0" ;
	for (int i = 0; i < 7; i++)
	{
		if (join[i] == expected[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;

	printf("w/ null char on second string : ") ;
	join = ft_strjoin("abc", "d\0ef") ;
	expected = "abcd\0" ;
	for (int i = 0; i < 6; i++)
	{
		if (join[i] == expected[i])
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\n") ;
}