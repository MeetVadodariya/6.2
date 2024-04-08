#include <stdio.h>

main() 
{
    int i,n,f=0,s=1,sum;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) 
	{
        printf("%d, ", f);
        sum = f + s;
        f = s;
        s = sum;
    }
\
}
