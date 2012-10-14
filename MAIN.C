#include<stdio.h>
#include <dos.h>
#include <conio.h>
#include "inverse.h"
#include"print.h"



/* 메인 시작 */
int main()
{
	clrscr();

	screen();
	VGA_inverse_bar(8, 3, 3);
	getche();
	
	return 0;
}
















