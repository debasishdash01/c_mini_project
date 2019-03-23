#include<stdio.h>
#include<string.h>
main()
{
	char cEO;
	printf("WORKBOOK OF C LANGUAGE");
	printf("\n----------------------\n");
	printf("======================\n");
	printf("Do you want to change background colour or font?\n Press Y to Change\n Press any other key to see Contents ");
	scanf("%c",&cEO);
	if(cEO=='Y' || cEO=='y')	
	{
	system("editor.exe");
	}
	else
	system("contents.exe");
	
}
