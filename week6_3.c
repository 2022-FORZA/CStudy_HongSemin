#include<stdio.h>
int main()
{
	long long n, sum = 0, k;
	scanf("%lld", &n);
	while (n > 0)
	{
		scanf("%lld", &k);
		sum += k;
		n--;
		sum -= n;
	}
	printf("%lld", sum);
}