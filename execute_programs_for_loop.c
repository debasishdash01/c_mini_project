#include<stdio.h>
main()
{
	int i,j,ch,ch2;
	printf("\n                         -----------------------------\n");
	printf("                         EXECUTE PROGRAMS OF FOR LOOPS\n");
	printf("                         -----------------------------\n\n");
	printf("Press 1 for the first pattern\nPress 2 for the second pattern\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	
/*
	PRINTING
	*****
	*****
	*****
	*****
	*****
*/
case 1:
	printf("\n\n\n");
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	
/*
	PRINTING
	*
	**
	***
	****
	*****
*/
	break;
	case 2:
		printf("\n\n\n");
	for(i=1;i<=5;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	break;
	default:
				system("cls");
	printf("                         --------------");
	printf("\n                        !INVALID CHOICE!\n");
	printf("                         --------------\n");
	
				system("execute_programs_for_loop.exe");
   }

	printf("\n\n--------------------------------------------------------------------------------");
	printf("\nPress 1 to run the code again\nPress 2 to go to previous menu\nPress any other number to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("execute_programs_for_loop.exe");
	}
	else if(ch2==2)
	{
		system("cls");
 	    system("for_loops.exe");
	}
	else
		system("traversing.exe");
}
