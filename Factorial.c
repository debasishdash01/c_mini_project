#include<stdio.h>
void fn(int);
main()
{
	system("cls");
	int a,ch2;
	printf("\n                         ---------\n");
	printf("                         FACTORIAL\n");
	printf("                         ---------\n\n");
	printf("\nEnter a number:");
	scanf("%d",&a);
	fn(a);
	printf("\n\n--------------------------------------------------------------------------------");
	printf("\nWhat now?");
	printf("\nPress 1 to run the code again\nPress 2 to go to previous menu\nPress any other number to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("Factorial.exe");
	}
	else if(ch2==2)
	{
		system("cls");
 	    system("programs_C1.exe");
	}
	else
		system("traversing.exe");
}
void fn(int a)
{
	int i,m=1;
	for(i=1;i<=a;i++)
	{
		m=m*i;
	}
	printf("Factorial of %d=%d",a,m);
}
