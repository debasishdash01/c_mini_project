#include<stdio.h>
int prime(int);
main()
{
	system("cls");
	int a,n,ch2;
	printf("\n                         ------------\n");
	printf("                         PRIME NUMBER\n");
	printf("                         ------------\n\n");
	printf("\nEnter a number:");
	scanf("%d",&n);
	a=prime(n);
	if(a)
	{
	printf("It is a prime number");
    }
    else
    {
	printf("It is not a prime number");}
    printf("\n\n--------------------------------------------------------------------------------");
printf("\nWhat now?");
	printf("\nPress 1 to run the code again\nPress 2 to go to previous menu\nPress 3 to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("Prime_No.exe");
	}
	else if(ch2==2)
	{
		system("cls");
 	    system("programs_C1.exe");
	}
	else
		system("traversing.exe");
}
int prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		c++;
		}
	}
	if(c==2)
	{
	return(1);
    }
	else
    {
	return(0);
    }
}

