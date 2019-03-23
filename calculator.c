#include<stdio.h>
main()
{
system("cls");
int num1,num2,i,res,ch,ch2;
printf("\n                         ----------------\n");
	printf("                         BASIC CALCULATOR\n");
	printf("                         ----------------\n\n");
printf("Press 1 for addition\nPress 2 for subtraction\nPress 3 for multiplication\nPress 4 for Division\nPress 5 to see remainder ");
scanf("%d",&i);
printf("Enter the first number:");
scanf("%d",&num1);
printf("Enter the second number:");
scanf("%d",&num2);
switch(i)
 {
	case 1:
	    	printf("SUM=%d",num1+num2);
		break;
	case 2:
			printf("SUBTRACTION=%d",num1-num2);
		break;
	case 3:
		    printf("MULTIPLICATION=%d",num1*num2);
		    break;
	case 4:
		     printf("DIVISION=%d",num1/num2);
		     break;
	case 5:
	        printf("REMAINDER=%d",num1%num2);
			break;	     
	default:
		system("cls");
	printf("                         --------------");
	printf("\n                        !INVALID CHOICE!\n");
	printf("                         --------------\n");
					system("calculator.exe");
 }
 printf("\n\n--------------------------------------------------------------------------------");
printf("\nWhat now?");
	printf("\nPress 1 to run the code again\nPress 2 to go to previous menu\nPress 3 to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("calculator.exe");
	}
	else if(ch2==2)
	{
		system("cls");
 	    system("programs_C1.exe");
	}
	else
		system("traversing.exe");
			
}
