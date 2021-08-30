#include <stdio.h>

int main() {
	long long l, r, p;
	int k, yes;

	scanf("%lld%lld%d", &l, &r, &k);
	yes = 0;
	p = 1;
	while (1) {
		if (p >= l) {
			printf("%lld ", p);
			yes = 1;
		}
		if (p <= r / k)
			p *= k;
		else
			break;
	}
	printf(yes ? "\n" : "-1\n");
	return 0;
}
