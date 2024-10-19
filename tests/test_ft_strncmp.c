#include "test.h"

void test_ft_strncmp ()
{
	printf("\n\n-- TEST STRNCMP --\n\n") ;

	char *bonjour = "bonjour" ;
	char *bonsoir = "bonsoir" ;

	printf("same string, small n : ") ;
	if (strncmp(bonjour, bonjour, 2) == ft_strncmp(bonjour, bonjour, 2))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("same string, big n : ") ;
	if (strncmp(bonjour, bonjour, 20) == ft_strncmp(bonjour, bonjour, 20))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("different string, small n : ") ;
	if (strncmp(bonjour, bonsoir, 2) == ft_strncmp(bonjour, bonsoir, 2))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("different string, big n : ") ;
	if (strncmp(bonjour, bonsoir, 20) == ft_strncmp(bonjour, bonsoir, 20))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("empty strings : ") ;
	if (strncmp("", "", 20) == ft_strncmp("", "", 20))
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("n = 0 : ") ;
	if (strncmp(bonjour, bonsoir, 0) == ft_strncmp(bonjour, bonsoir, 0))
		printf("✅\n") ;
	else
		printf("❌\n") ;
}