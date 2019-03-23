#include<stdio.h>
main()
{
	system("cls");
	int i,j,k,ch2;
	printf("\n                         ------\n");
	printf("                         TABLES\n");
	printf("                         ------\n\n");
	printf("\nEnter the limit you want to show tables: ");
	scanf("%d",&k);
	printf("\n\nTimeTable from 1 to %d\n",k);
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=10;j++)
		{
		printf("%d*%d=%d\t",i,j,i*j);
	    }
		printf("\n");
	}
	printf("\n\n--------------------------------------------------------------------------------");
printf("\nWhat now?");
	printf("\nPress 1 to run the code again\nPress 2 to go to previous menu\nPress 3 to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("Table.exe");
	}
	else if(ch2==2)
	{
		system("cls");
 	    system("programs_C1.exe");
	}
	else
		system("traversing.exe");
}
