#include <stdio.h>

int fibo(int);

 

int main()

{

    int num,ch2;

    int result;

 printf("IT IS FIBONACCI SERIES USING RECURSION\n");
 printf("--------------------------------------\n\n");

    printf("Enter the nth number in fibonacci series: ");

    scanf("%d", &num);

    if (num < 0)

    {

        printf("Fibonacci of negative number is not possible.\n");

    }

    else

    {

        result = fibo(num);

        printf("The %d number in fibonacci series is %d\n", num, result);

    }

printf("\n\n--------------------------------------------------------------------------------");
printf("\nWhat now?");
	printf("\nPress 1 to run the code again\nPress 2 to go to previous menu\nPress 3 to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("recursive_function.exe");
	}
	else if(ch2==2)
	{
		system("cls");
 	    system("programs_C3.exe");
	}
	else
		system("traversing.exe");
    return 0;

}

int fibo(int num)

{

    if (num == 0)

    {

        return 0;

    }

    else if (num == 1)

    {

        return 1;

    }

    else

    {

        return(fibo(num - 1) + fibo(num - 2));

    }


}

