#include <stdio.h>
int main()
{
	int n = 0;
	while(n != 42)
	{
		scanf("%d",&n);
		printf("%d\n",n);
		fflush(stdout);
	}
} 
