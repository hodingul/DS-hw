#include <stdio.h>

int main(void)
{
	char* ptr[4] = { "Korea", "Seoul", "Mapo", "152¹øÁö 2/3" };
	printf("%s \n", ptr[0]);
	printf("%s \n", ptr[1]);
	printf("%s \n", ptr[2]);
	printf("%s", ptr[3]);
	return 0;
}