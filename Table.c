#include <stdio.h>

int main()
{
    int n,j,i =1;
    printf("Enter the range:");
    scanf("%d", &n);
    for ( ; i<= 10; i++)
    {
        for(j =2; j<= n; j++)
        {
            printf("%d\t",j*i);
        }
       printf("\n");
    }
     return 0;
}
