#include <stdio.h>
int factorial (int n)
{
	if (n==1)
		return 1;
	else 
		return n * factorial(n-1);
}

int main()
{
	int n;
	printf(" Enter which factorial");
	scanf("%d ",&n);
	printf("%d",factorial(n));
	return 0;
}

