#include<stdio.h>

int tinhAn(int n) {
	if (n == 1)
		return 1;

	int tong = 0;
	for (int i = 0; i < n; i++) {
		tong = 0;
		tong = tong + tinhAn(i);
	}

	return n * tong;
}

int main() {
	int n;
	printf("Nhap so n de tinh A_n:");
	scanf("%d", &n);

	if (n < 1) {
		printf("n phai lon hon hoac bang 1");

	}

	int ketQua = tinhAn(n);

	printf("A_%d = %d\n", n, ketQua);
	return 0;
}
