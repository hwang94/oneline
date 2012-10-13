#include <dos.h>
#include "print.h"
//#include <string.h>;

void print_char(int y, int x, char ch, char attr)
{
	unsigned char far *location;

	location = (unsigned char far *)0xb8000000 + y * 160 + x * 2 ;
	
	*location++ = ch;
	*location = attr;
	
}

void print_string(int y, int x, char * str, char attr)
{
	int cnt;
	char buff[255];
	
	strcpy (buff, str);

	for(cnt = 0; cnt < strlen(buff); ++cnt)
	{
		print_char(y, x, *(buff+cnt), attr);
		++x;
	}



	
}

