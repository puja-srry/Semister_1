#include<stdio.h>
int main()
{
	int num, factor, i;
	factor=0;
	printf("enter value of num:");
	scanf("%d", &num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			factor=factor+1;
			}
	}
	if(factor>2)
	{
		printf("not p");
			}
			else
			{
				printf("prime");
				}
				return 0;
}
