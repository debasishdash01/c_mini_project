#include<stdio.h>
main()
{
	int ch;
	printf("\nPress 1 for Even And Odd Program\nPress 2 to Show tables\nPress 3 for Basic Calculator\nPress 4 for Prime Number\nPress 5 for Factorial\nPress 6 for Palliondrome of string\nPress any other for main menu ");
	scanf("%d",&ch);
if(ch==1)
{

	 FILE *fp;
    char c;
	fp=fopen("Even_Odd.c","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}
if(ch==2)
{
	FILE *fp;
    char c;
	fp=fopen("Table.c","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}
if(ch==3)
{
	FILE *fp;
    char c;
	fp=fopen("calculator.c","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}
if(ch==4)
{
	FILE *fp;
    char c;
	fp=fopen("Prime_No.c","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}
if(ch==5)
{
	FILE *fp;
    char c;
	fp=fopen("Factorial.c","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}
if(ch==6)
{
	FILE *fp;
    char c;
	fp=fopen("Palliondrome.c","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}
if(ch>6 || ch<1)
{
	printf("Invalid Option");
}
system("traversing.exe");
}
