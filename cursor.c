#include <dos.h>
#include "cursor.h"


void move_cursor(int page, int y, int x)
{
	union REGS regs;
	regs.h.ah = 2;
	regs.h.dh = y;
	regs.h.dl = x;
	regs.h.bh = page;
	int86(0x10, &regs, &regs);	
}

// void cursor_off()
// {
	// union REGS regs;
	// regs.h.ah = 1;
	// regs.h.ch = 0x20;
	// regs.h.cl = 0;
	// int86(0x10m &regs, &regs);
// }

// void cursor_on()
// {
	// union REGS regs;
	// regs.h.ah = 1;
	// regs.h.ch = 0x0B;
	// regs.h.cl = 0x0C;
	// int86(0x10, &regs, &regs);
// }

