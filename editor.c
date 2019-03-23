#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

main()
{
    char ch1;
    int ch,ch2;
	system("cls");
//printf("Color Codes:\n 0 = Black\n 1 = Blue\n 2 = Green\n 3 = Aqua\n 4 = Red\n 5 = Purple\n 6 = Yellow\n 7 = White\n 8 = Gray\n 9 = Light Blue\n A = Light Green\n B = Light Aqua\n C = Light Red");
//printf("\n D = Light Purple\n E = Light Yellow\n F = Bright White");
    //system("COLOR FC");*/
    printf("\n\nWelcome to the color changing application!");
    printf("\n------------------------------------------\n\n");
   printf("Press any 1-7 to change the color:");
    scanf("%d",&ch);
switch(ch)
{
case 1:
system("COLOR 1F");
break;
case 2:
system("COLOR 6C");
break;
case 3:
system("COLOR 71");
break;
case 4:
	system("COLOR 72");
	break;
	case 5:
		system("COLOR 74");
		break;
		case 6:
			system("COLOR 75");
			break;
			case 7:
				system("COLOR 76");
				break;
default:
system("cls");
	printf("                         --------------");
	printf("\n                        !INVALID CHOICE!\n");
	printf("                         --------------\n");
					system("editor.exe");
}
    
    printf("\n\n\n\n--------------------------------------------------------------------------------");
    printf("\nWhat now?");
printf("\nPress 1 to change color again\nPress any other number to go to main menu: ");
	scanf("%d",&ch2);
	
	if(ch2==1)
	{
		system("cls");
		system("editor.exe");
	}
		
	else
		system("traversing.exe");
    
}
