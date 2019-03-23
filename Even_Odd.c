#include<stdio.h>
main()
{
	system("cls");
	int i,limit,ch2;
	printf("\n                         ------------\n");
	printf("                         EVEN AND ODD\n");
	printf("                         ------------\n\n");
	printf("Enter a limit ");
	scanf("%d",&limit);
	printf("\n\n");
	for(i=1;i<=limit;i++)
	{
		if(i%2==0)
		{
			printf("%d is Even\t",i);
		}
		else
		{
			printf("%d is Odd\t",i);
		}
	}
printf("\n\n--------------------------------------------------------------------------------");
printf("\nWhat now?");
	printf("\nPress 1 to run the code again\nPress 2 to go to previous menu\nPress 3 to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("Even_Odd.exe");
	}
	else if(ch2==2)
	{
		system("cls");
 	    system("programs_C1.exe");
	}
	else
		system("traversing.exe");
}
