#include<stdio.h>

void tinh(int n, int* x, int* y) {
	if (n == 0) {
		*x = 1;
		*y = 0;
		return;
	}

	int x_truoc, y_truoc;
	tinh(n - 1, &x_truoc, &y_truoc);

	*x = x_truoc + y_truoc;
	*y = 3 * x_truoc + 2 * y_truoc;
}


int main() {
	int n;
	printf("Nhap so luong n can tinh:");
	scanf("%d", &n);

	int x_n, y_n;
	tinh(n, &x_n, &y_n);

	printf("x_%d = %d\n", n, x_n);
	printf("y_%d = %d\n", n, y_n);

	return 0;

}