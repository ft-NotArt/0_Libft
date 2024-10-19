#include "test.h"

void test_ft_split ()
{
	printf("\n\n-- TEST SPLIT --\n\n") ;

	char **split ;

	printf("simple phrase : ") ;
	split = ft_split("Just a simple phrase", ' ') ;
	if    (!ft_strncmp(split[0], "Just", 5)
		&& !ft_strncmp(split[1], "a", 2)
		&& !ft_strncmp(split[2], "simple", 7)
		&& !ft_strncmp(split[3], "phrase", 7)
		&&  split[4] == NULL)
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("w/ grouped splitters : ") ;
	split = ft_split("Just           a         simple       phrase      ", ' ') ;
	if    (!ft_strncmp(split[0], "Just", 5)
		&& !ft_strncmp(split[1], "a", 2)
		&& !ft_strncmp(split[2], "simple", 7)
		&& !ft_strncmp(split[3], "phrase", 7)
		&&  split[4] == NULL)
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("w/ splitters at start/end : ") ;
	split = ft_split("                   Just         a    simple     phrase         ", ' ') ;
	if    (!ft_strncmp(split[0], "Just", 5)
		&& !ft_strncmp(split[1], "a", 2)
		&& !ft_strncmp(split[2], "simple", 7)
		&& !ft_strncmp(split[3], "phrase", 7)
		&&  split[4] == NULL)
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("w/ strange splitters : ") ;
	split = ft_split("\r\r\r\rJust\r\r\r\ra\r\r\r\rsimple\r\r\rphrase\r\r\r", '\r') ;
	if    (!ft_strncmp(split[0], "Just", 5)
		&& !ft_strncmp(split[1], "a", 2)
		&& !ft_strncmp(split[2], "simple", 7)
		&& !ft_strncmp(split[3], "phrase", 7)
		&&  split[4] == NULL)
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("w/ no splitters in phrase : ") ;
	split = ft_split("Justasimplephrase", ' ') ;
	if    (!ft_strncmp(split[0], "Justasimplephrase", 18)
		&&  split[1] == NULL)
		printf("✅\n") ;
	else
		printf("❌\n") ;
}