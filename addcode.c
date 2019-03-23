#include<stdio.h>
main()
{
	system("cls");
	int ch,ch3;
	int i=0;
	FILE *fp;
    char c;
    
  fp=fopen("t1.c","w");
printf("Enter the line of text,press q to stop\n");
while(c!='q')
{
c=getchar();
if(c=='q')
break;
else
fputc(c,fp);
++i;
}
fclose(fp);

printf("Press 1 to execute the code\nPress 2 to see the file");
printf("\nEnter your Choice: ");
scanf("%d",&ch);
switch(ch)
{
	case 2:
		
	system("CLS");
    fp=fopen("t1.c","r");
    while(1)
     {
    c=fgetc(fp);
    if(c==EOF)
    break;
     else
      putchar(c);
     }
    fclose(fp);	
	break;
	
	case 1:
		system("cls");
		printf("\nOUTPUT OF THE CODE IS\n\n");
        system("ren t1.c temp6.c");
	    system("gcc -o temp6.exe temp6.c");
	    system("temp6.exe");
	    system("ren temp6.c t1.c");	
		break;
}


printf("\n\n--------------------------------------------------------------------------------");
printf("\nWhat now?");
	printf("\nPress 1 to run the code again\nPress any other number to go to main menu ");
	scanf("%d",&ch3);
	
	if(ch3==1)
	{
		system("cls");
		system("addcode.exe");
    }
	else
		system("traversing.exe");	
}
