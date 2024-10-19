#include "test.h"

void test_ft_putendl_fd ()
{
	printf("\n\n-- TEST PUTENDL_FD --\n\n") ;

	int fd ;
	char *buffer ;

	printf("simple string : ") ;
	fd = open("tests/txt/putendl_letter.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putendl_fd("abc", fd) ;
	close(fd) ;
	fd = open("tests/txt/putendl_letter.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(5, sizeof(char)) ;
	read(fd, buffer, 5) ;
	close(fd) ;
	if    (buffer[0] == 'a'
		&& buffer[1] == 'b'
		&& buffer[2] == 'c'
		&& buffer[3] == '\n'
		&& buffer[4] == '\0')
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("digits string : ") ;
	fd = open("tests/txt/putendl_digit.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putendl_fd("123", fd) ;
	close(fd) ;
	fd = open("tests/txt/putendl_digit.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(5, sizeof(char)) ;
	read(fd, buffer, 5) ;
	close(fd) ;
	if    (buffer[0] == '1'
		&& buffer[1] == '2'
		&& buffer[2] == '3'
		&& buffer[3] == '\n'
		&& buffer[4] == '\0')
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("random ascii : ") ;
	fd = open("tests/txt/putendl_ascii.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putendl_fd("\t]\a", fd) ;
	close(fd) ;
	fd = open("tests/txt/putendl_ascii.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(5, sizeof(char)) ;
	read(fd, buffer, 5) ;
	close(fd) ;
	if    (buffer[0] == '\t'
		&& buffer[1] == ']'
		&& buffer[2] == '\a'
		&& buffer[3] == '\n'
		&& buffer[4] == '\0')
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("empty string : ") ;
	fd = open("tests/txt/putendl_empty.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putendl_fd("", fd) ;
	close(fd) ;
	fd = open("tests/txt/putendl_empty.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(5, sizeof(char)) ;
	read(fd, buffer, 5) ;
	close(fd) ;
	if    (buffer[0] == '\n'
		&& buffer[1] == '\0')
		printf("✅\n") ;
	else
		printf("❌\n") ;

	printf("string w/ null char : ") ;
	fd = open("tests/txt/putendl_null.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putendl_fd("f\0\0t", fd) ;
	close(fd) ;
	fd = open("tests/txt/putendl_null.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(5, sizeof(char)) ;
	read(fd, buffer, 5) ;
	close(fd) ;
	if    (buffer[0] == 'f'
		&& buffer[1] == '\n'
		&& buffer[2] == '\0')
		printf("✅\n") ;
	else
		printf("❌\n") ;
}