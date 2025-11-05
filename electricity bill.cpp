//electricity bill
#include<stdio.h>
int main()
{
	int units;
	int price;
	printf("enter units values");
	scanf("%d",&units);
	printf("enter price");
	scanf("%d",&price);
    int bill;
    bill=units*price;
	printf("the bill is %d\n",bill);
	return 0;
}
