#include<stdio.h>

long long tinhYn_Dequy(int n) {
	if (n == 1) return 1;
	if (n == 2) return 2;
	if (n == 3) return 3;
	return tinhYn_Dequy(n - 1) + 2 * tinhYn_Dequy(n - 2) + 3 * tinhYn_Dequy(n - 3);
}

long long tinhYn_KhuDeQuy(int n) {
	if (n == 1) return 1;
	if (n == 2) return 2;
	if (n == 3) return 3;

	long long y1 = 1, y2 = 2, y3 = 3, yn;
	for (int i = 4; i <= n; i++) {
		yn = y3 + 2 * y2 + 3 * y1;
		y1 = y2;
		y2 = y3;
		y3 = yn;
	}
	return yn;
}

int main() {
	int n;
	printf("Nhap gia tri n:");
	scanf("%d", &n);

	printf("Y_%d (de quy) = %lld\n", n, tinhYn_Dequy(n));
	printf("Y_%d (khu de quy) = %lld\n", n, tinhYn_KhuDeQuy(n));

	return 0;
}