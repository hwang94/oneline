#include<stdio.h>
#include <dos.h>
#include"print.h"


#define garo	196
#define sero	179

#define ltop	218	
#define rtop	191	

#define lbottom	192	
#define rbottom	217	

#define L	195
#define R	180
#define dltop	201	
#define drtop	187	
#define dlbottom	200
#define drbottom	188
#define dgaro	205	
#define dsero	186	


int main()
{
	int x;
	int y;


	clrscr();

	print_char(1, 1, ltop, 7);
	print_char(1, 78, rtop, 7);
	print_char(23, 1, lbottom, 7);
	print_char(23, 78, rbottom, 7);

	for(x = 2; x < 78; ++x)
	{
		print_char(1, x, garo, 7);
		print_char(23, x, garo, 7);
	}

	for(y = 2; y < 23; ++y)
	{
		print_char(y, 1, sero, 7);
		print_char(y, 78, sero, 7);
	}

	print_char(5, 1, L, 7);
	print_char(5, 78, R, 7);

	for(x = 2; x < 78; ++x)
	{
		print_char(5, x, garo, 7);
	}

	print_char(7, 3, dltop, 7);
	print_char(7, 76, drtop, 7);
	print_char(17, 3, dlbottom, 7);
	print_char(17, 76, drbottom, 7);

	for(x = 4; x < 76; ++x)
	{
		print_char(7, x, dgaro, 7);
		print_char(17, x, dgaro, 7);
	}

	for(y = 8; y < 17; ++y)
	{
		print_char(y, 3, dsero, 7);
		print_char(y, 76, dsero, 7);
	}

	print_char(18, 3, ltop, 7);
	print_char(18, 76, rtop, 7);
	print_char(22, 3, lbottom, 7);
	print_char(22, 76, rbottom, 7);

	for(x = 4; x < 76; ++x)
	{
		print_char(18, x, garo, 7);
		print_char(22, x, garo, 7);
	}

	for(y = 19; y < 22; ++y)
	{
		print_char(y, 3, sero, 7);
		print_char(y, 76, sero, 7);
	}

	print_string(3, 8, "New          Load          Save          Save as          Exit", 7);
	print_string(20, 13, "F10 - Menu           Alt + X - Exit          F1 - Help", 7);
	
	getche();
	return 0;
}

