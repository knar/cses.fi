#include <bits/stdc++.h>
using namespace std;

int main() {
	long n;
	scanf("%ld", &n);
	
	long long sum = 0;
	for (int i = 0; i < n-1; ++i) {
		long a;
		scanf("%ld", &a);
		sum += a;
	}

	long long expected_sum = (n+1) * (n/2);
	if (n & 1) {
		expected_sum += (n+1) / 2;
	}
	
	printf("%lld\n", expected_sum - sum);
	return 0;
}
