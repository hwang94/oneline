#include "inverse.h"

void VAG_inverse_attrib(unsigned char far *attrib)
{
	unsigned char origin_attrib;
	
	origin_attrib = *attrib;
	*attrib >>= 4;
	*attrib = *attrib & 0x0F;
	origin_attrib <<= 4;
	*attrib = *attrib | origin_attrib;	
}

void VGA_inverse_bar(int x, int y, int length)
{
	int i = 0;
	unsigned char far *attr_memory = (unsigned char far *) 0xb8000001L;
	
	attr_memory = attr_memory + y * 160 + x * 2;
	
	for(i = 0; i < length; i++)
	{
		VAG_inverse_attrib(attr_memory);
		attr_memory += 2;
	}
}