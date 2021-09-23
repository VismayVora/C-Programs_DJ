include <stdio.h>

int main()
{
	int n,factorial = 1;
	printf("Enter the number whose factorial you want to find:\n");
	scanf("%d",&n);

	for(int i = 1; i <= n; i++);
	{
		factorial  *= i;

	}
	printf("The factorial is: %d",factorial);
}