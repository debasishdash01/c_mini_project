#include<stdio.h>
main()
{
	int ch,ch2;
	char c;
	FILE *fp;
	printf("\n                         -----\n");
	printf("                         LOOPS\n");
	printf("                         -----\n\n");
	printf("Press 1 for Theory\n  Press 2 to do For Loops\n  Press 3 for while loops\n  Press 4 for do-while loops\n  Press 5 to see limitations of different loops\nPress 6 to go to menu options ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			system("cls");
		fp=fopen("theory_C2.txt","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
	break;
		case 2:
			system("for_loops.exe");
			break;
		case 3:
			 system("while_loops.exe");
			 break;
		case 4:
		     system("do_while_loops.exe");
			 break;
		case 5:
			 fp=fopen("loops_limitations.txt","r");
      	while((c=getc(fp))!=EOF)
          	{
		printf("%c",c);
         	}
	fclose(fp);
			 break;	 
		 case 6:
		 	system("cls");
		 	 system("traversing.exe");
		 	 break;
			default:
				system("cls");
				printf("                         --------------");
	printf("\n                        !INVALID CHOICE!\n");
	printf("                         --------------\n");
				system("loop.exe");
	}
	printf("\n\n--------------------------------------------------------------------------------");
printf("\nWhat now?");
	printf("\nPress 1 to run the code again\nPress 2 to go to previous menu\nPress 3 to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("loop.exe");	
	}
	else if(ch2==2)
	{
		system("cls");
 	    system("contents.exe");
	}
	else
		system("traversing.exe");
	
}
