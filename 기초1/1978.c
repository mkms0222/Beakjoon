#include <stdio.h>

#define false 0
#define true 1

int prime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);

    int num[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (prime(num[i])) count++;
    }

    printf("%d", count);

    return 0;
}