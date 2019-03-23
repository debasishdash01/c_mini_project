#include<stdio.h>
main()
{
	int ch2;
char c;
printf("\n                         ---------------------------\n");
	printf("                         FOR LOOPS THEORY AND SYNTAX\n");
	printf("                         ---------------------------\n\n");
FILE *fp;
fp=fopen("for_loops_Basic_Theory.txt","r");
      	while((c=getc(fp))!=EOF)
          	{
		printf("%c",c);
         	}
	fclose(fp);
	printf("\n\n--------------------------------------------------------------------------------");
	printf("\nPress 1 to run the code again\nPress 2 to go to previous menu\nPress 3 to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("for_loops_Basic_Theory.exe");
	}
	else if(ch2==2)
	{
		system("cls");
 	    system("for_loops.exe");
	}
	else
		system("traversing.exe");
}
