#include <bits/stdc++.h>
using namespace std;

int main() {
	long n;
	scanf("%ld", &n);

	long last;
	if (n > 0)
		scanf("%ld", &last);
	
	long c = 0;
	for (long i = 1; i < n; ++i) {
		long x;
		scanf("%ld", &x);
		if (x < last) {
			c += last-x;
		}
		else {
			last = x;
		}
	}

	printf("%ld\n", c);
	return 0;
}
