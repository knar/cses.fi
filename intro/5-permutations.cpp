#include <bits/stdc++.h>
using namespace std;

int main() {
	long n;
	scanf("%ld", &n);

	if (n == 1) {
		prinf("1\n");
		return 0;
	}

	if (n < 4) {
		printf("NO SOLUTION\n");
		return 0;
	}

	for (long i = 6; i <= n; i += 2) {
		printf("%ld ", i);
	}
	printf("2 4 1 3");
	for (long i = 5; i <= n; i += 2) {
		printf(" %ld", i);
	}
	printf("\n");

	return 0;
}
