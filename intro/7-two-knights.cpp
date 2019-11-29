#include <bits/stdc++.h>
using namespace std;

int onboardpairs(int row, int col, int k) {
	int s = 8;		
	if (0 >= row-2 || 0 >= col-1) --s;
	if (0 >= row-1 || 0 >= col-2) --s;
	if (k < row+2 || k < col+1) --s;
	if (k < row+1 || k < col+2) --s;
	if (0 >= row-2 || k < col+1) --s;
	if (0 >= row-1 || k < col+2) --s;
	if (k < row+2 || 0 >= col-1) --s;
	if (k < row+1 || 0 >= col-2) --s;
	return s;
}

int main() {
	int n;
	scanf("%d", &n);

	for (int k = 1; k <= n; ++k) {
		if (k == 1) {
			printf("0\n");
			continue;
		}
		else if (k == 2) {
			printf("6\n");
			continue;
		}

		long squares = k*k;
		long ways = 0;
		
		ways += 4 * (squares - onboardpairs(1, 1, k) - 1);		
		ways += 8 * (squares - onboardpairs(1, 2, k) - 1);
		ways += 4 * (squares - onboardpairs(2, 2, k) - 1);
		ways += 4 * (k-4) * (squares - onboardpairs(1, 3, k) - 1);
		ways += 4 * (k-4) * (squares - onboardpairs(2, 3, k) - 1);

		if (k > 4) {
			ways += (k-4)*(k-4)*(squares - 9);
		}

		ways /= 2;
		printf("%ld\n", ways);
	}

	return 0;
}
