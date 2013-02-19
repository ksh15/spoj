#include <stdio.h>
#include <string.h>

int main()
{
	int s[5010], d[5010], n, w[5010], i;
	char c[5010];

	while (1) {
		scanf("%s", c);

		if (c[0] == '0') {
			return 0;
		}

		n = strlen(c);

		for (i = 0; i < n; i++) {
			s[i] = c[i] - '0';
		}

		for (i = 1; i < n; i++) {
			d[i] = s[i - 1] * 10 + s[i];
		}

		w[0] = 1;

		if (s[1]) {
			w[1] = 1;
		} else {
			w[1] = 0;
		}

		if (d[1] > 9 && d[1] < 27) {
			w[1]++;
		}

		for (i = 2; i < n; i++) {
			if (s[i]) {
				w[i] = w[i - 1];
			} else {
				w[i] = 0;
			}

			if (d[i] > 9 && d[i] < 27) {
				w[i] += w[i - 2];
			}
		}

		printf("%d\n", w[n - 1]);
	}
}
