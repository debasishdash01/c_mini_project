#include<stdio.h>
main()
{
	int ch,ch2;
	printf("\n\n\t =======================");
	printf("\n\t FUNCTIONS PROGRAMS MENU");
	printf("\n\t =======================\n");
	printf("\nPress 1 for EXAMPLE OF math library\nPress 2 for EXAMPLE OF string functions\nPress 3 for recursive functions\nPress 4 for main menu ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	system("math_library_functions.exe");
	 break;
	case 2:
	system("string_library.exe");
     break;
	case 3:
	system("recursive_function.exe");
	 break;
	case 4:
	system("traversing.exe");
    break;
default:
	{
		system("cls");
	printf("                         --------------");
	printf("\n                        !INVALID CHOICE!\n");
	printf("                         --------------\n");
	system("programs_C3.exe");
	}
}
}


