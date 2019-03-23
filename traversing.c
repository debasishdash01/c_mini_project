#include<stdio.h>
main()
{
	int ch,ch5;
	system("cls");
	printf("\nWhat do you want to do now?\n");
	printf("\n\t ===================");
	printf("\n                 MENU");
	printf("\n\t ===================\n\n");
	printf("     To see Contents Again Press 1");
	printf("\n     To go to Basic  2");
	printf("\n     To go to Loops 3");
	printf("\n     To go to Functions 4");
	printf("\n     To change colour Press 5");
	printf("\n     To open chrome to search internet Press 6");
	printf("\n     Press 7 for Acknowledgement: ");
	printf("\n     Press 8 to run the last code");
	printf("\n\n\n     Enter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 8:
			system("cls");
			system("gcc -o t1.exe t1.c");
			  system("temp6.exe");
			  printf("\n\nPress any number to run code again:");
			  scanf("%d",&ch5);
			  if(ch5==1)
			  system("traversing.exe");
			  else
			  system("traversing.exe");
			  break;
		case 1:
			system("contents.exe");
			  break;
		case 2:
		    system("basics.exe");
		      break;	  
		case 3:
		  	system("loop.exe");
		      break;
		case 5:
		  	system("editor.exe");
	    	  break;
	    	    case 7:
		    system("ack.exe");	 
			break; 
			case 6:
				
system("Start C:\\Users\\User\\AppData\\Local\\Google\\Chrome\\Application\\chrome.exe  --profile-directory=Default --app-id=obahddlloniininploallkakgjopjaon");

				break;
		case 4:
	   	system("functions.exe");
			  break;
		default:
			printf("\nInvalid Option");
		      		system("traversing.exe");
	}
	
}
