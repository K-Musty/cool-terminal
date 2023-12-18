#include <stdio.h>

#define VAR 2

int main()
{
	printf("File :%s\n", __FILE__ );
	printf("Time :%s\n", __TIME__ );
	printf("Date :%s\n", __DATE__ );
	printf("Line :%d\n", __LINE__ );
	printf("ANSI :%d\n", __STDC__ );
}
