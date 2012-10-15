#include<stdio.h>
#include <dos.h>
#include <conio.h>
#include "inverse.h"
#include"print.h"
#include "cursor.h"



/* 메인 시작 */
int main()
{
	int key = 0;
	int x = 8;
	int y = 12;
	
	clrscr();

	screen();
	//VGA_inverse_bar(3, 8, 3); // New

	move_cursor(0, y, x);

	while(1)
	{
		key = getch();
		if(key == 0)
		{
			key = getch();
			if(key == r)
			{
				x = x+3;				
			}		
			
			if(key == l)
			{
				x = x-3;				
			}
			
			if(key == u)
			{
				return 0;
			}
			
			move_cursor(0, y, x);
		}
	}
	
	return 0;
}

















