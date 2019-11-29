#include <bits/stdc++.h>
using namespace std;

long maxl(long a, long b) {
	if (a > b) {
		return a;
	}
	return b;
}

int main() {
	long curr_run = 1;
	long max_run = 0;
	char last;
	char c;
	while (true) {
		scanf("%c", &c);
		if (c == '\n')
			break;

		if (c == last) {
			curr_run++;
		}
		else {
			max_run = maxl(max_run, curr_run);
			curr_run = 1;	
		}
		last = c;
	}
	max_run = maxl(max_run, curr_run);

	printf("%ld\n", max_run);
	return 0;
}
