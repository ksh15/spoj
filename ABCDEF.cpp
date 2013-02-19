#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int n, a[101], x, c = 0;
	vector<int> v;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++) {
		if (a[i]) {
			for (int j = 0; j < n; j++) {
				for (int k = 0; k < n; k++) {
					v.push_back(a[i] * (a[j] + a[k]));
				}
			}
		}
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				x = a[i] * a[j] + a[k];
				c += upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x);
			}
		}
	}

	printf("%d\n", c);

	return 0;
}
