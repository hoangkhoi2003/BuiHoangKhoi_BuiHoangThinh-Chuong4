#include<stdio.h>

int fibonacci(int n) {
	if (n <= 2) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

void xuatFibonacci(int n) {
	printf("Day so Fibonacci co %d so la:", n);
	for (int i = 1; i <= n; i++) {
		printf("%lld", fibonacci(i));
		if (i < n)printf(" ");
	}
	printf("\n");
}

int main() {
	int n;
	printf("Nhap so luong phan tu Fibonacci can xuat:");
	scanf("%d", &n);

	xuatFibonacci(n);

	return 0;
}
