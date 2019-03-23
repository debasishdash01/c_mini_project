#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
	char cEO;
	//system("COLOR FC");
	printf("                    ======================\n");
	printf("                    WORKBOOK OF C LANGUAGE");
	//printf("\n----------------------\n");
	printf("\n                    ======================\n\n");
	printf("                    -----------------------------\n");
	printf("                    Submitted To-Gursharan Singh\n                    Created By-Debasish Dash\n                    Registration No.-11701128\n                    Roll-RK17A05\n                    Section-K17YP\n                    Group-1\n");
	printf("                    -----------------------------\n\n\n");
	printf("\nDo you want to change background colour or font?\n-------------------------------------------------\n   Press Y/y to Change\n   Press N/n to see Contents: ");
	
	scanf("%c",&cEO);
	if(cEO=='Y' || cEO=='y')	
	{
	system("editor.exe");
	}
	if(cEO=='N' || cEO=='n')
	{
	
	system("contents.exe");
}

}
