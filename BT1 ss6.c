#include <stdio.h>

int main() {
    int n;
    printf("Nhap so n (1 <= n <= 9): ");
    scanf("%d", &n);
    printf("Bang cuu chuong %d:\n", n);
    for (int i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
