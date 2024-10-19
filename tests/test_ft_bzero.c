#include "test.h"

void test_ft_bzero ()
{
	printf("\n\n-- TEST BZERO --\n\n") ;

	char bonjour1[10] = "bonjour" ;
	char bonjour2[10] = "bonjour" ;
	
	bzero(bonjour1, 4) ;
	ft_bzero(bonjour2, 4) ;

	int  i = 0 ;
	printf("Zeros : ") ;
	for (; i < 4; i++)
	{
		if (bonjour2[i] == 0)
			printf("✅") ;
		else
			printf("❌") ;
	}
	printf("\nApres : ") ;
	for (; i < 10; i++)
	{
		if (bonjour1[i] == bonjour2[i])
			printf("✅") ;
		else
			printf("❌") ;		
	}
	printf("\n") ;
}