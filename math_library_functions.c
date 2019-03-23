#include <stdio.h>
#include <math.h>

int main ()
{ 
int ch2;
		const float pi = 3.1415926;
		printf("2.0 = %f\n", 2.0);
		printf("pi = %f\n", pi);
		printf("cos(pi) = %f\n", cos(pi));
		printf("sin(pi) = %f\n", sin(pi));
		printf("sqrt(2.0) = %f\n", sqrt(2.0));
    	printf("sqrt(2.0) / 2 = %f\n", sqrt(2.0) / 2);
    	printf("\n\n--------------------------------------------------------------------------------");
printf("\nWhat now?");
	printf("\nPress 1 to run the code again\nPress 2 to go to previous menu\nPress 3 to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("math_library_functions.exe");
	}
	else if(ch2==2)
	{
		system("cls");
 	    system("programs_C3.exe");
	}
	else
		system("traversing.exe");
} 

