#include "test.h"

void test_ft_putstr_fd ()
{
	printf("\n\n-- TEST PUTSTR_FD --\n\n") ;

	int fd ;
	char *buffer ;

	printf("simple string : ") ;
	fd = open("tests/txt/putstr_letter.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putstr_fd("abcd", fd) ;
	close(fd) ;
	fd = open("tests/txt/putstr_letter.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(5, sizeof(char)) ;
	read(fd, buffer, 5) ;
	close(fd) ;
	if    (buffer[0] == 'a'
		&& buffer[1] == 'b'
		&& buffer[2] == 'c'
		&& buffer[3] == 'd'
		&& buffer[4] == '\0')
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("digits string : ") ;
	fd = open("tests/txt/putstr_digit.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putstr_fd("123", fd) ;
	close(fd) ;
	fd = open("tests/txt/putstr_digit.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(5, sizeof(char)) ;
	read(fd, buffer, 5) ;
	close(fd) ;
	if    (buffer[0] == '1'
		&& buffer[1] == '2'
		&& buffer[2] == '3'
		&& buffer[3] == '\0')
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("random ascii : ") ;
	fd = open("tests/txt/putstr_ascii.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putstr_fd("\t]!\a", fd) ;
	close(fd) ;
	fd = open("tests/txt/putstr_ascii.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(5, sizeof(char)) ;
	read(fd, buffer, 5) ;
	close(fd) ;
	if    (buffer[0] == '\t'
		&& buffer[1] == ']'
		&& buffer[2] == '!'
		&& buffer[3] == '\a'
		&& buffer[4] == '\0')
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("empty string : ") ;
	fd = open("tests/txt/putstr_empty.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putstr_fd("", fd) ;
	close(fd) ;
	fd = open("tests/txt/putstr_empty.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(5, sizeof(char)) ;
	read(fd, buffer, 5) ;
	close(fd) ;
	if    (buffer[0] == '\0')
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("string w/ null char : ") ;
	fd = open("tests/txt/putstr_null.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putstr_fd("f\0\0t", fd) ;
	close(fd) ;
	fd = open("tests/txt/putstr_null.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(5, sizeof(char)) ;
	read(fd, buffer, 5) ;
	close(fd) ;
	if    (buffer[0] == 'f'
		&& buffer[1] == '\0')
		printf("✅\n") ;
	else
		printf("❌\n") ;
}