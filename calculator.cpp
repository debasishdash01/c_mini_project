#include<iostream>
#include<conio.h>
main()
{
int i;
int a,b,c;
scanf("%d",&i);
scanf("%d%d",&b,&c);
switch(i)
{
	case 1:
		a=b+c;
		break;
		case 2:
			a=b-c;
		break;
		default:
			printf("\n Invalid Choice");
			//	printf("%d",c);
			}
			printf("%d",a);
}
