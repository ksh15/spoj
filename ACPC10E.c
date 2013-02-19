#include <stdio.h>

int main()
{
	long long int g, t, a, d, i, n, x, y;
	
	while(1) {
		scanf("%lld%lld%lld%lld", &g, &t, &a, &d);
		
		if (g == -1) {
			return 0;
		}
		
		n = g * a + d;
		for (i = 1; i < n; i = i << 1);
		
		x = ((t * (t - 1)) / 2) * g;
		x += i - 1;
		y = i - n;
		
		printf("%lld*%lld/%lld+%lld=%lld+%lld\n", g, a, t, d, x, y);
	}
}
