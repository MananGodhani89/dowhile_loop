#include<stdio.h>

main()

{
	int a=1,n;
	printf("Enter Number=");
	scanf("%d",&n);
	do	{
		if (n%2==0)
		{
		printf("%d\n",n);
		}
		n--;
		
		}
	while(a<=n);
	
}
