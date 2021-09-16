#include<stdio.h>

int main() {
	int n, i, j;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			for (j = 1; j <= n; j++) {
				if (j % 2 == 0) {
					printf(" ");
				}
				else {
					printf("*");
				}
			}
		}
		else if (i % 2 == 0) {
			for (j = 1; j <= n; j++) {
				if (j % 2 == 0) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
