#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	int fives = 0;
	for (int p = 5; n/p > 0; p *= 5) {
		fives += n/p;
	}
	printf("%d\n", fives);
}
