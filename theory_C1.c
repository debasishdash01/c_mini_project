//Theory For Basics
#include<stdio.h>
main()
{ 

	FILE *fp;
	char c;
	int ch,ch2;
	printf("\n                         ------------\n");
	printf("                         BASIC THEORY\n");
	printf("                         ------------\n\n");
	printf("\nEnter 1 to for basic theory\nEnter 2 for Basic Syntax");
	printf("\nEnter your Choice ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		system("cls");
	fp=fopen("Basics_Theory.txt","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
	break;
	
	case 2:
		system("cls");
		fp=fopen("Basics_Syntax.txt","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
	break;
    default:
	system("cls");
	printf("                         --------------");
	printf("\n                        !INVALID CHOICE!\n");
	printf("                         --------------\n");
	system("theory_C1");
}
printf("\n\n--------------------------------------------------------------------------------");
printf("\nWhat now?");
	printf("\nPress 1 to run the code again\nPress 2 to go to previous menu\nPress 3 to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("theory_C1.exe");	
	}
	else if(ch2==2)
	{
		system("cls");
 	    system("basics.exe");
	}
	else
		system("traversing.exe");
	
}
