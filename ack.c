#include<stdio.h>
main()
{
	system("cls");
	system("COLOR FC");
	int ch2;
	printf("                    -----------------------------\n");
	printf("                    Submitted To-Gursharan Singh\n                    Created By-Debasish Dash\n                    Registration No.-11701128\n                    Roll-RK17A05\n                    Section-K17YP\n                    Group-1\n");
	printf("                    -----------------------------\n\n\n");
	printf("\n\n--------------------------------------------------------------------------------");
printf("\nWhat now?");
	printf("\nPress 1 to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	system("traversing.exe");
	if(ch2!=1)
	{
		printf("\nInvalid OPTION\n");
		system("ack.exe");
	}
}
