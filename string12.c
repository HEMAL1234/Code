#include <stdio.h>

int main () {

	for (char ch = 'A'; ch <= 'Z'; ++ch) {
		printf("%d\t", ch - 'A');
	}

	for (char ch = 'a'; ch <= 'z'; ++ch) {
		printf("%d\t", ch - 'a');
	}

	return 0;
}
