#include<stdio.h>

int fibonacci(int n, int a, int b) {
	if (a + b >= n)
		return b;
	return fibonacci(n, b, a + b);
}

int lapfibonacci(int n) {
	if (n <= 1)return 0;
	int a = 0, b = 1;
	while (a + b < n); {
		int temp = a + b;
		a = b;
		b = temp;
	}
	return b;

}

int main() {
	int n;
	printf("Nhap so nguyen n:");
	scanf("%d", &n);

	printf("So fibonacci lon nhat nho hon %d (de quy) la: %d\n", n, fibonacci(n, 0, 1));

	printf("So fibonacci lon nhat nho hon %d (lap) la: %d\n", n, lapfibonacci(n));

	return 0;

}