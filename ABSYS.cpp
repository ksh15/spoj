#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>

using namespace std;

int num(string str)
{
  int x = 0;

	for (int i = 0; i < str.size(); i++) {
		x *= 10;
		x += str[i] - '0';
	}

	return x;
}

bool find(string str)
{
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'm') {
			return true;
		}
	}

	return false;
}

int main()
{
	int t;
	int i;
	string s;
	string a, b, c;
	int x, y, z;

	cin >> t;
	getchar();

	while (t--) {
		getchar();
		getline(cin, s);
		a.clear();
		b.clear();
		c.clear();

		for (i = 0; s[i] != ' '; i++) {
			a += s[i];
		}
		i += 3;

		for (; s[i] != ' '; i++) {
			b += s[i];
		}
		i += 3;

		for (; i < s.size(); i++) {
			c += s[i];
		}

		if (find(a)) {
			y = num(b);
			z = num(c);
			x = z - y;
		} else if (find(b)) {
			x = num(a);
			z = num(c);
			y = z - x;
		} else {
			x = num(a);
			y = num(b);
			z = x + y;
		}

		printf("%d + %d = %d\n", x, y, z);
	}

	return 0;
}
