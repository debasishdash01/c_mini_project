#include<stdio.h>
#include<string.h>
main()
{
	system("CLS");
	char ChapCode[3];
	printf("\n\n--->     C1-BASICS      <---\n");
	printf("\n--->     C2-LOOPS       <---\n");
	printf("\n--->     C3-FUNCTIONS   <---\n");
	printf("\nChoose a Chapter Code you want to see: ");
	gets(ChapCode);
	if(stricmp(ChapCode,"C1")==0)
	{
		system("basics.exe");
	}
	if(stricmp(ChapCode,"C2")==0)
	{
		system("loop.exe");
	}
	if(stricmp(ChapCode,"C3")==0)
	{
		system("functions.exe");
	}
	else
	{
		system("cls");
		printf("                        -----------------------------");
	printf("\n                        !Enter a proper Chapter Code!\n");
	printf("                        -----------------------------\n");
	system("contents.exe");
    }
	
}
