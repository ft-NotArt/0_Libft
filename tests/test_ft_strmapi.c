#include "test.h"

static char add_value_to_char(unsigned int val, char c)
{
	return (c + val) ;
}

static char add_value_twice_to_char(unsigned int val, char c)
{
	return (c + (val * 2)) ;
}

static char sub_value_to_char(unsigned int val, char c)
{
	return (c - val) ;
}

void test_ft_strmapi ()
{
	printf("\n\n-- TEST STRMAPI --\n\n") ;

	char *str = "abcdef" ;
	char *mapi ;

	printf("fct add index : ") ;
	mapi = ft_strmapi(str, add_value_to_char) ;
	int i = 0 ;
	for (/**/; i < 6; i++)
	{
		if (mapi[i] == (str[i] + i))
			printf("✅") ;
		else
			printf("❌") ;
	}
	if (mapi[i] == str[i])
			printf("✅") ;
		else
			printf("❌") ;
	printf("\n") ;

	printf("fct add index twice : ") ;
	mapi = ft_strmapi(str, add_value_twice_to_char) ;
	i = 0 ;
	for (/**/; i < 6; i++)
	{
		if (mapi[i] == (str[i] + (i * 2)))
			printf("✅") ;
		else
			printf("❌") ;
	}
	if (mapi[i] == str[i])
			printf("✅") ;
		else
			printf("❌") ;
	printf("\n") ;

	printf("fct substract index : ") ;
	mapi = ft_strmapi(str, sub_value_to_char) ;
	i = 0 ;
	for (/**/; i < 6; i++)
	{
		if (mapi[i] == (str[i] - i))
			printf("✅") ;
		else
			printf("❌") ;
	}
	if (mapi[i] == str[i])
			printf("✅") ;
		else
			printf("❌") ;
	printf("\n") ;
}