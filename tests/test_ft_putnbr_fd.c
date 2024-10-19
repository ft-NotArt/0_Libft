#include "test.h"

void test_ft_putnbr_fd ()
{
	printf("\n\n-- TEST PUTNBR_FD --\n\n") ;

	int fd ;
	char *buffer ;

	printf("simple number : ") ;
	fd = open("tests/txt/putnbr_simple.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putnbr_fd(42, fd) ;
	close(fd) ;
	fd = open("tests/txt/putnbr_simple.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(50, sizeof(char)) ;
	read(fd, buffer, 50) ;
	close(fd) ;
	if    (buffer[0] == '4'
		&& buffer[1] == '2'
		&& buffer[2] == '\0')
		printf("✅\n") ;	
	else
		printf("❌\n") ;

	printf("negative number : ") ;
	fd = open("tests/txt/putnbr_negative.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putnbr_fd(-42, fd) ;
	close(fd) ;
	fd = open("tests/txt/putnbr_negative.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(50, sizeof(char)) ;
	read(fd, buffer, 50) ;
	close(fd) ;
	if    (buffer[0] == '-'
		&& buffer[1] == '4'
		&& buffer[2] == '2'
		&& buffer[3] == '\0')
		printf("✅\n") ;	
	else
		printf("❌\n") ;

	printf("int max : ") ;
	fd = open("tests/txt/putnbr_int_max.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putnbr_fd(2147483647, fd) ;
	close(fd) ;
	fd = open("tests/txt/putnbr_int_max.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(50, sizeof(char)) ;
	read(fd, buffer, 50) ;
	close(fd) ;
	if    (buffer[0] == '2'
		&& buffer[1] == '1'
		&& buffer[2] == '4'
		&& buffer[3] == '7'
		&& buffer[4] == '4'
		&& buffer[5] == '8'
		&& buffer[6] == '3'
		&& buffer[7] == '6'
		&& buffer[8] == '4'
		&& buffer[9] == '7'
		&& buffer[10] == '\0')
		printf("✅\n") ;	
	else
		printf("❌\n") ;

	printf("int min : ") ;
	fd = open("tests/txt/putnbr_int_min.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putnbr_fd(-2147483648, fd) ;
	close(fd) ;
	fd = open("tests/txt/putnbr_int_min.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(50, sizeof(char)) ;
	read(fd, buffer, 50) ;
	close(fd) ;
	if    (buffer[0] == '-'
		&& buffer[1] == '2'
		&& buffer[2] == '1'
		&& buffer[3] == '4'
		&& buffer[4] == '7'
		&& buffer[5] == '4'
		&& buffer[6] == '8'
		&& buffer[7] == '3'
		&& buffer[8] == '6'
		&& buffer[9] == '4'
		&& buffer[10] == '8'
		&& buffer[11] == '\0')
		printf("✅\n") ;	
	else
		printf("❌\n") ;

	printf("zero : ") ;
	fd = open("tests/txt/putnbr_zero.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putnbr_fd(0, fd) ;
	close(fd) ;
	fd = open("tests/txt/putnbr_zero.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(50, sizeof(char)) ;
	read(fd, buffer, 50) ;
	close(fd) ;
	if    (buffer[0] == '0'
		&& buffer[1] == '\0')
		printf("✅\n") ;	
	else
		printf("❌\n") ;

	printf("ten : ") ;
	fd = open("tests/txt/putnbr_ten.txt", O_CREAT | O_RDWR, 0777) ;
	ft_putnbr_fd(10, fd) ;
	close(fd) ;
	fd = open("tests/txt/putnbr_ten.txt", O_CREAT | O_RDWR, 0777) ;
	buffer = calloc(50, sizeof(char)) ;
	read(fd, buffer, 50) ;
	close(fd) ;
	if    (buffer[0] == '1'
		&& buffer[1] == '0'
		&& buffer[2] == '\0')
		printf("✅\n") ;	
	else
		printf("❌\n") ;
}