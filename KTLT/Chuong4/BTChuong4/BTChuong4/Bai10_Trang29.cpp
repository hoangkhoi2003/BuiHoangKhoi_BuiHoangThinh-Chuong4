#include <stdio.h>
#include <stdlib.h>

int binary_search_recursive(int a[], int left, int right, int x) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (a[mid] == x)
            return mid;

        if (a[mid] > x)
            return binary_search_recursive(a, left, mid - 1, x);

        return binary_search_recursive(a, mid + 1, right, x);
    }

    return -1;
}

int main() {
    int n, x, result;
    int* a;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);


    a = (int*)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Loi cap phat bo nho!");
        return 1;
    }

    printf("Nhap %d phan tu cua mang (theo thu tu tang dan):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Nhap so can tim: ");
    scanf("%d", &x);

    result = binary_search_recursive(a, 0, n - 1, x);

    if (result == -1)
        printf("Khong tim thay %d trong mang.\n", x);
    else
        printf("%d duoc tim thay tai vi tri %d trong mang.\n", x, result);


    free(a);

    return 0;
}