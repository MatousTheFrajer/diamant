#include <stdio.h>

int main(void) {

	int x = 9;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < x; j++) {
			printf(" ");
		}
		for (int k = i; k >= 1; k--) {
			printf("%d", k);
		}
		for (int k = 2; k <= i; k++) {
			printf("%d", k);
		}
		printf("\n");
		x--;
	}
	x = 0;
	for (int i = 9; i > 0; i--) {
		for (int j = 0; j < x; j++) {
			printf(" ");
		}
		for (int k = i; k >= 1; k--) {
			printf("%d", k);
		}
		for (int y = 2; y <= i; y++) {
			printf("%d", y);
		}
		printf("\n");
		x++;
	}
}