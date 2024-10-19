#include "test.h"

// void (*f)(unsigned int, char*)

static void add_value_to_char(unsigned int val, char *c)
{
	*c += val ;
}

static void add_value_twice_to_char(unsigned int val, char *c)
{
	*c += (val * 2) ;
}

static void sub_value_to_char(unsigned int val, char *c)
{
	*c -= val ;
}

static void set_char_as_zero(unsigned int val, char *c)
{
	(void) val ;
	*c = 0 ;
}

void test_ft_striteri ()
{
	printf("\n\n-- TEST STRITERI --\n\n") ;

	char *str1 = "abcdef" ;
	char str2[] = "abcdef" ;

	printf("fct add index : ") ;
	ft_striteri(str2, add_value_to_char) ;
	int i = 0 ;
	for (/**/; i < 6; i++)
	{
		if (str2[i] == (str1[i] + i))
			printf("✅") ;
		else
			printf("❌") ;
	}
	if (str2[i] == str1[i])
			printf("✅") ;
		else
			printf("❌") ;
	printf("\n") ;

	printf("fct add index twice: ") ;
	char str3[] = "abcdef" ;
	ft_striteri(str3, add_value_twice_to_char) ;
	i = 0 ;
	for (/**/; i < 6; i++)
	{
		if (str3[i] == (str1[i] + (i * 2)))
			printf("✅") ;
		else
			printf("❌") ;
	}
	if (str3[i] == str1[i])
			printf("✅") ;
		else
			printf("❌") ;
	printf("\n") ;

	printf("fct substract index : ") ;
	char str4[] = "abcdef" ;
	ft_striteri(str4, sub_value_to_char) ;
	i = 0 ;
	for (/**/; i < 6; i++)
	{
		if (str4[i] == (str1[i] - i))
			printf("✅") ;
		else
			printf("❌") ;
	}
	if (str4[i] == str1[i])
			printf("✅") ;
		else
			printf("❌") ;
	printf("\n") ;

	printf("fct set as zero : ") ;
	char str5[] = "abcdef" ;
	ft_striteri(str5, set_char_as_zero) ;
	i = 0 ;
	for (/**/; i < 6; i++)
	{
		if (str5[i] == 0)
			printf("✅") ;
		else
			printf("❌") ;
	}
	if (str5[i] == 0)
			printf("✅") ;
		else
			printf("❌") ;
	printf("\n") ;
}