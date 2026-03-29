#include<stdio.h>
main()
{
	int hour,minute;
	scanf("%d %d",&hour,&minute);
	int t1=hour/100*60;
	int t2=hour%100;
	int t=t1+t2+minute;
	printf("%d%02d",t/60,t%60);
	
	return 0;
}
	
