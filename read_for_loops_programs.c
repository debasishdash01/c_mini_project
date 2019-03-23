#include<stdio.h>
main()
{ int ch2;
FILE *fp;
    char c;
	fp=fopen("execute_programs_for_loop.c","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
	printf("\n\n--------------------------------------------------------------------------------");
	printf("\nPress 1 to go to previous menu\nPress any other number to go to main menu ");
	scanf("%d",&ch2);
	
	 if(ch2==1)
	{
		system("cls");
 	    system("for_loops.exe");
	}
	else
		system("traversing.exe");
}
