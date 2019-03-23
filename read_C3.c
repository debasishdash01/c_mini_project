#include<stdio.h>
main()
{
	int ch,ch2;
	printf("\n                         ----------------\n");
	printf("                         READ C3 PROGRAMS\n");
	printf("                         ----------------\n\n");
	//printf("\nPress 1 for Even And Odd Program\nPress 2 to Show tables\nPress 3 for Basic Calculator\nPress 4 for Prime Number\nPress 5 for Factorial\nPress 6 for Palliondrome of string\nPress any other for main menu ");
	printf("\nPress 1 for EXAMPLE OF math library\nPress 2 for EXAMPLE OF string functions\nPress 3 for recursive functions\nPress 4 for main menu ");
	
	scanf("%d",&ch);
if(ch==1)
{
    system("cls");
	 FILE *fp;
    char c;
	fp=fopen("math_library_functions.c","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}
if(ch==2)
{
	system("cls");
	FILE *fp;
    char c;
	fp=fopen("string_library.c","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}
if(ch==3)
{
	system("cls");
	FILE *fp;
    char c;
	fp=fopen("recursive_function.c","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}

if(ch>3 || ch<1)
{
	
	system("cls");
	printf("                         --------------");
	printf("\n                        !INVALID CHOICE!\n");
	printf("                         --------------\n");
	system("read_C1");
}
printf("\n\n--------------------------------------------------------------------------------");
printf("\nWhat now?");
	printf("\nPress 1 to run the code again\nPress 2 to go to previous menu\nPress 3 to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("read_C3.exe");	
	}
	else if(ch2==2)
	{
		system("cls");
 	    system("functions.exe");
	}
	else
		system("traversing.exe");
}
