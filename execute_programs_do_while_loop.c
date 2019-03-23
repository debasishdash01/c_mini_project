#include <stdio.h>
main()
{
const int ROWS = 6;
const int CHARS = 6;
int row;
char ch,ch2;
for (row = 0; row < ROWS; row++)
{
for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
printf("%c", ch);
printf("\n");
}
printf("\n\n--------------------------------------------------------------------------------");
	printf("\nPress 1 to run the code again\nPress 2 to go to previous menu\nPress any other number to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("execute_programs_do_while_loop.exe");
	}
	else if(ch2==2)
	{
		system("cls");
 	    system("do_while_loops.exe");
	}
	else
		system("traversing.exe");
}
