#include<stdio.h>
int fb(int);
main()
{
	int i,n,f;
	printf("Enter a limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=fb(i);
		printf("%d\t",f);
	}
}
int fb(int x)
{
	if(x==1)
	return 0;
	else if(x==2)
	return 1;
	else(fb(x-1)+fb(x-2));
}
