#include<stdio.h>
#include<string.h>
main()
{
	system("cls");
	char a[31],b[31];
	int l,ch2;
	printf("\n                         ----------\n");
	printf("                         PALINDROME\n");
	printf("                         ----------\n\n");
	printf("Limit is 30 characters\n");
	printf("\nEnter a string: ");
	gets(a);
	strcpy(b,a);
	strrev(a);
	l=strcmp(a,b);
	if(l==0)
	{
		printf("It is palindrome");
	}
	else
	{
		printf("It is not palindrome");
	}
	printf("\n\n--------------------------------------------------------------------------------");
printf("\nWhat now?");
	printf("\nPress 1 to run the code again\nPress 2 to go to previous menu\nPress any other number to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("Palliondrome.exe");
	}
	else if(ch2==2)
	{
		system("cls");
 	    system("programs_C1.exe");
	}
	else
		system("traversing.exe");
}
