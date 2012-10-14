#ifndef	__PRINT_H__
#define __PRINT_H__

/*================================screen========================================*/
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
/*================================screen========================================*/

void print_char(int y, int x, char ch, char attr);
void print_string(int y, int x, char *string, char attr);
void  screen();

#endif	//	__PRINT_H__