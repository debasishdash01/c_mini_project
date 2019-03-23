#include <stdio.h>
#define MAX_SIZE 100 
main()

{
	char string1[10], string2[10];
	int ch,ch2,count1,count2,flag;
	char text1[MAX_SIZE];
    char text2[MAX_SIZE];
    printf("Enter a string:");
    gets(string1);
    printf("\nEnter another string:");
    gets(string2);
    int i;
    printf("1 for counting string1\n2 for copying\n");
    scanf("%d",&ch);
       switch(ch)
	{
	case 1:
	count1 = 0;
	 count2 = 0; 
	 flag = 0; 
    

    /*  Count the number of characters in string1 */

    while (string1[count1] != '\0')

        count1++;

    /*  Count the number of characters in string2 */

    while (string2[count2] != '\0')

        count2++;

    i = 0;

 

    while ((i < count1) && (i < count2))

    {

        if (string1[i] == string2[i])

        {

            i++;

            continue;

        }

        if (string1[i] < string2[i])

        {

            flag = -1;

            break;

        }

        if (string1[i] > string2[i])

        {

            flag = 1;

            break;

        }

    }

    if (flag == 0)

        printf("Both strings are equal \n");

    if (flag == 1)

        printf("String1 is greater than string2 \n", string1, string2);

    if (flag == -1)

        printf("String1 is less than string2 \n", string1, string2);
break;
case 2:
    
    /* Copy text1 to text2 character by character */
    for(i=0; string1[i]!='\0'; i++)
    {
        text2[i] = text1[i];
    }

    //Makes sure that the string is NULL terminated
    string2[i] = '\0';

    printf("First string = %s\n", string1);
    printf("Second string = %s\n", string2);
    printf("Total characters copied = %d\n", i);
	
	}

  printf("\n\n--------------------------------------------------------------------------------");
printf("\nWhat now?");
	printf("\nPress 1 to run the code again\nPress 2 to go to previous menu\nPress 3 to go to main menu ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("string_library.exe");
	}
	else if(ch2==2)
	{
		system("cls");
 	    system("programs_C3.exe");
	}
	else
		system("traversing.exe");  
}
