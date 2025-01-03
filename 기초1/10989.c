#include <stdio.h>

#define SIZE 10001

int main() {
    int n;
    scanf("%d", &n);

    int arr[SIZE] = { 0, };
    int num;
    for (int i = 1; i <= n; i++){
        scanf("%d", &num);
        arr[num]++;
    }

    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < arr[i]; j++) {
            printf("%d\n", i);
        }
    }

    return 0;
}