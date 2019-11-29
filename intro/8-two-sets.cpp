#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	if ((n+1)/2 & 1) {
		printf("NO\n");
		return 0;
	}
	else {
		printf("YES\n");
	}

	int i = 1;
	int j;
	int iinc;
	int jinc = 1;
	if (n & 1) {
		j = 3;
		iinc = 1;
	}
	else {
		j = 2;
		iinc = 3;
	}

	printf("%d\n", (n+1)/2);
	while (i <= n) {
		printf("%d", i);
		i += iinc;
		printf((i <= n) ? " " : "\n");
		iinc = (iinc == 1) ? 3 : 1;
	}

	printf("%d\n", n/2);
	while (j <= n) {
		printf("%d", j);
		j += jinc;
		printf((j <= n) ? " " : "\n");
		jinc = (jinc == 1) ? 3 : 1;
	}

	return 0;
}
