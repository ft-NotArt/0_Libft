#include "test.h"

void test_ft_memset ()
{
	printf("\n\n-- TEST MEMSET --\n\n") ;

	char bonjour1[10] = "bonjour" ;
	char bonjour2[10] = "bonjour" ;
	
	printf("n < len : ") ;
	if (!strcmp(memset(bonjour1, '.', 4), ft_memset(bonjour2, '.', 4)))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	char bonjour3[10] = "bonjour" ;
	char bonjour4[10] = "bonjour" ;

	printf("n = len : ") ;
	if (!strcmp(memset(bonjour3, '.', 7), ft_memset(bonjour4, '.', 7)))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	char bonjour5[10] = "bonjour" ;
	char bonjour6[10] = "bonjour" ;

	printf("n > len : ") ;
	if (!strncmp(memset(bonjour5, '.', 10), ft_memset(bonjour6, '.', 10), 10))
		printf("✅\n") ;
	else
		printf("❌\n") ;
}