#include<stdio.h>
main()
{ int ch2;
FILE *fp;
    char c;
	fp=fopen("execute_programs_while_loop.c","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
	printf("\n\n--------------------------------------------------------------------------------");
	printf("\nPress 1 to run the code again\nPress 2 to go to previous menu\nPress 3 to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("read_while_loops_programs.exe");
	}
	else if(ch2==2)
	{
		system("cls");
 	    system("while_loops.exe");
	}
	else
		system("traversing.exe");
}
