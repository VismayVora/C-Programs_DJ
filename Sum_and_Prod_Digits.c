#include <stdio.h>
int main()
{
	int n,sum = 0,prod = 1;
	printf("Enter the number:");
	scanf("%d",&n);
	while (n!=0)
	{
	    sum += n % 10;
	    prod *= n % 10;
		n = n/10;
	}
	printf("The sum is:%d\n",sum);
	printf("The product is:%d",prod);
	
}
