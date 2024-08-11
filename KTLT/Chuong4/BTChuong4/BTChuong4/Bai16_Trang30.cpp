#include <stdio.h>


long long tinhXn_DeQuy(int n) {
    if (n == 1 || n == 2) return 1;
    return tinhXn_DeQuy(n - 1) + (n - 1) * tinhXn_DeQuy(n - 2);
}


long long tinhXn_KhuDeQuy(int n) {
    if (n == 1 || n == 2) return 1;

    long long x1 = 1, x2 = 1, xn;
    for (int i = 3; i <= n; i++) {
        xn = x2 + (i - 1) * x1;
        x1 = x2;
        x2 = xn;
    }
    return xn;
}

int main() {
    int n;
    printf("Nhap gia tri n >= 1): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n phai lon hon hoac bang 1.\n");
        return 1;
    }

    printf("X_%d (de quy) = %lld\n", n, tinhXn_DeQuy(n));
    printf("X_%d (khu de quy) = %lld\n", n, tinhXn_KhuDeQuy(n));

    return 0;
}