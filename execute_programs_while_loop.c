#include<stdio.h>
main()
{
	int ch2;
	printf("\n                         -------------------------------\n");
	printf("                         EXECUTE PROGRAMS OF WHILE LOOPS\n");
	printf("                         -------------------------------\n\n");
	int n;
	int a=0;
	int sum=0;
	printf("Enter a number you want to see the sum: ");
	scanf("%d",&n);
	while(a<n)
	{
		a++;
		sum=sum+a;
	}
	printf("\n\nSUM UPTO %d is:- %d",n,sum);
	printf("\n\n--------------------------------------------------------------------------------");
	printf("\nPress 1 to run the code again\nPress 2 to go to previous menu\nPress any other number to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("execute_programs_while_loop.exe");
	}
	else if(ch2==2)
	{
		system("cls");
 	    system("while_loops.exe");
	}
	else
		system("traversing.exe");
}
