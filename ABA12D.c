#include <stdio.h>

int main()
{
  int x[37] = {2, 4, 9, 16, 25, 64, 289, 729, 1681, 2401, 3481, 4096, 5041, 7921, 10201, 15625, 17161, 27889, 28561, 29929, 65536, 83521, 85849, 146689, 262144, 279841, 458329, 491401, 531441, 552049, 579121, 597529, 683929, 703921, 707281, 734449, 829921};
	int t, a, b, i, j;
	
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d%d", &a, &b);
		for (i = 0; x[i] < a; i++);
		for (j = 36; x[j] > b; j--);
		printf("%d\n", j - i + 1);
	}
	
	return 0;
}
