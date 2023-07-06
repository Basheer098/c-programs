#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,sum=0;
	system("clear");
	do
	{
	printf("\n enter  range of number: ");
	scanf("%d",&n);
	} 
	while(n<=0);

	for(i=1;i<n;i++)
	{
		sum+=1;
	}
	printf("\n %d",sum);
}	

