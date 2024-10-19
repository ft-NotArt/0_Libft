#include "test.h"

void test_ft_strlen ()
{
	printf("\n\n-- TEST STRLEN --\n\n") ;

	char bonjour [10] = "bonjour" ;
	printf("simple string : ") ;
	if (strlen(bonjour) == ft_strlen(bonjour))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	char vide [10] = "" ;
	printf("empty string : ") ;
	if (strlen(vide) == ft_strlen(vide))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	char avec_null [10] = "avec\0null" ;
	printf("w/ null : ") ;
	if (strlen(avec_null) == ft_strlen(avec_null))
		printf("✅\n") ;
	else
		printf("❌\n") ;
}