#include <bits/stdc++.h>
using namespace std;

typedef unsigned long ul;
typedef unsigned long long ull;

int main() {
	long t;
	scanf("%ld", &t);

	for (long i = 0; i < t; ++i) {
		ul row, col;
		scanf(" %ld %ld", &row, &col);

		ul big = (row > col) ? row : col;
		ull num;
		if (big & 1)
			num = big*big - big + col - row + 1;
		else
			num = big*big - big + row - col + 1;

		printf("%lld\n", num);
	}
	return 0;
}
