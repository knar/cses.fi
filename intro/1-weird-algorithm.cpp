#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned long long n;
	scanf("%llu", &n);

	printf("%llu", n);
	while (n != 1) {	
		if (n & 1) {
			n = n*3 + 1;
		}
		else {
			n = n/2;
		}
		printf(" %llu", n);
	}
	printf("\n");
	return 0;
}
