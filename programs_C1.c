#include<stdio.h>
main()
{
	int ch,ch2;
	printf("\n\n\t ===================");
	printf("\n\t BASIC PROGRAMS MENU");
	printf("\n\t ===================\n");
	printf("\nPress 1 for Even And Odd Program\nPress 2 to Show tables\nPress 3 for Basic Calculator\nPress 4 for Prime Number\nPress 5 for Factorial\nPress 6 for Palindrome\nPress 7 for main menu ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	system("Even_Odd.exe");
	 break;
	case 2:
	system("Table.exe");
     break;
	case 3:
	system("calculator.exe");
	 break;
	case 4:
	system("Prime_No.exe");
   	 break;
	case 5:
	system("Factorial.exe");
	 break;    
	case 6:
	system("Palliondrome.exe");
	 break;
	case 7:
	system("traversing.exe");
    break;
default:
	{
		system("cls");
	printf("                         --------------");
	printf("\n                        !INVALID CHOICE!\n");
	printf("                         --------------\n");
	system("programs_C1.exe");
	}
}
}


