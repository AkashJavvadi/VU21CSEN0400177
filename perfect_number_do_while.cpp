#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	printf("give value for n ");
	scanf("%d",&n);
	do
	{
	if(n%i==0)
	sum=sum+i;
	i++;
	}	while(i<n);
	if(n==sum)
	 printf("it is a perfect number");
	 else
	 printf("not a perfect number");
}
