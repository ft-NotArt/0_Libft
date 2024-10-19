#include "test.h"

void test_ft_putchar_fd ()
{
	printf("\n\n-- TEST PUTCHAR_FD --\n\n") ;

	int fd ;
	char *buffer ;

	printf("simple letter : ") ;
	fd = open("tests/txt/putchar_letter.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putchar_fd('c', fd) ;
	close(fd) ;
	fd = open("tests/txt/putchar_letter.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(5, sizeof(char)) ;
	read(fd, buffer, 5) ;
	close(fd) ;
	if (buffer[0] == 'c')
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("simple digit : ") ;
	fd = open("tests/txt/putchar_digit.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putchar_fd('5', fd) ;
	close(fd) ;
	fd = open("tests/txt/putchar_digit.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(5, sizeof(char)) ;
	read(fd, buffer, 5) ;
	close(fd) ;
	if (buffer[0] == '5')
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("random ascii : ") ;
	fd = open("tests/txt/putchar_ascii.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putchar_fd('\t', fd) ;
	close(fd) ;
	fd = open("tests/txt/putchar_ascii.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(5, sizeof(char)) ;
	read(fd, buffer, 5) ;
	close(fd) ;
	if (buffer[0] == '\t')
		printf("✅\n") ;
	else
		printf("❌\n") ;
}