#include <stdio.h>

int 
main(void)
{
	int		i         , n;
	long		result;

	scanf("%d", &n);
	result = factorial(n);
	printf("%ld! = %d\n", n, result);
}

int 
factorial(long n)
{
	if (n > 1)
		return n * factorial(n - 1);
	else if (n == 1)
		return 1;
}
