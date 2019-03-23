#include<stdio.h>
#include<string.h>
main()
{
FILE *fp;
    char c;
    system("cls");
	fp=fopen("s.c","w");
	while(1)
	{
		c=getchar();
		if(c==EOF)
		break;
		else
		fputc(c,fp);
		
	}
	fclose(fp);
	fp=fopen("s.c","r");
	while(1)
	{
	c=fgetc(fp);
	if(c==EOF)
	break;
	else
	putchar(c);
	}
	fclose(fp);
	
	
	/*FILE *fq;
    char d;
	fp=fopen("temp.c","w");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);*/
	//system("gcc temp.c");
	//system("ren s.c temp.exe");
	int ret;
	char oldname[]="s.c";
	char newname[]="temp.exe";
	ret = rename(oldname, newname);
	if(ret==0)
	{
		printf("File renamed successfully");
	}
	else
	{
		printf("Error");
	}
	system("temp.exe");
	//system("ren temp.c s.c");
//	system("s.exe");
}
