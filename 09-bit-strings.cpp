#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	int mod = 1000000007;
	int res = 0;
	if (n > 0)
		res = 2;
	for (int i = 1; i < n; ++i)
		res *= 2, res %= mod;
	printf("%d\n", res);
	return 0;
}
