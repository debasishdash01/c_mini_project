#include<stdio.h>
main()
{
	system("cls");
	int ch;
	printf("\n                         ------\n");
	printf("                         BASICS\n");
	printf("                         ------\n\n");
	printf("Press 1 for Theory\nPress 2 to execute the programs\nPress 3 to read the programs\nPress 4 to add new programs\nPress 5 to go to main menu option ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			system("theory_C1.exe");
			break;
		case 2:
			 system("programs_C1.exe");
			 break;
		case 3:
		     system("read_C1.exe");
			 break;	 
		case 4:
		    system("addcode.exe");
			break;	 
		case 5:
			system("cls");
			system("traversing.exe");
				break;
		default:
			system("cls");
				system("basics.exe");
	}
}
