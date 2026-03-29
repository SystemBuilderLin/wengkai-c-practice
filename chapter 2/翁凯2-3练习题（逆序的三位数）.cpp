#include<stdio.h>
main()
{
	int x;
	scanf("%d",&x);
	int a=x/100;
	int b=x%100/10;
	int c=x-a*100-b*10;
	int t=c*100+b*10+a;
	printf("%d",t);
	
   return 0;
   
}
