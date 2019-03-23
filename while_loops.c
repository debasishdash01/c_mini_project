#include<stdio.h>
main()
{
	int ch,ch2;
	char c;
	FILE *fp;
	printf("\n                         -----------\n");
	printf("                         WHILE LOOPS\n");
	printf("                         -----------\n\n");
	printf("Press 1 for Theory and Syntax\nPress 2 to execute the programs\nPress 3 to read the programs\nPress 4 to add new programs ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			system("cls");
fp=fopen("while_loops_Basic_Theory.txt","r");
      	while((c=getc(fp))!=EOF)
          	{
		printf("%c",c);
         	}
	fclose(fp);
	break;
		case 2:
			system("cls");
			 system("execute_programs_while_loop.exe");
			 break;
		case 3:
			system("cls");
		     fp=fopen("execute_programs_while_loop.c","r");
      	while((c=getc(fp))!=EOF)
          	{
		printf("%c",c);
         	}
	fclose(fp);
			 break;	 
		case 4:
			system("cls");
		    system("addcode.exe");
			break;
			default:
			system("cls");
	printf("                         --------------");
	printf("\n                        !INVALID CHOICE!\n");
	printf("                         --------------\n");
				system("while_loops.exe");
	}
	
	printf("\n\n--------------------------------------------------------------------------------");
	printf("\nWhat now?");
	printf("\nPress 1 to run the code again\nPress 2 to go to previous menu\nPress any other number to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("while_loops.exe");
	}
	else if(ch2==2)
	{
		system("cls");
 	    system("loop.exe");
 	}
else
		system("traversing.exe");
}
