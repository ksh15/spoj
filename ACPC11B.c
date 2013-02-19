#include <stdio.h>

int main()
{
	int t, n, m, a;
	register int i, j, tmp, min;
	
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		
		int x[n];
		for (i = 0; i < n; i++) {
			scanf("%d", &x[i]);
		}
		
		scanf("%d", &m);
		
		int y[m];
		for (i = 0; i < m; i++) {
			scanf("%d", &y[i]);
		}
		
		min = ((y[0] > x[0]) ? (y[0] - x[0]) : (x[0] - y[0]));
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				tmp = ((y[j] > x[i]) ? (y[j] - x[i]) : (x[i] - y[j]));
				if (tmp < min) {
					min = tmp;
				}
			}
		}
		printf("%d\n", min);
	}
	
	return 0;
}

