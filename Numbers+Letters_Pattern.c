#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    
    for(int i = 1; i<=n; i++)
    {
        for (int j=1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k=i; k >= 1; k--)
        {
            printf("%d",k);
        }
        for(int l = i -1 ; l >= 1; l--)
        {
            printf("%c",l + 64);
        }
        printf("\n");
    }

    return 0;
}
