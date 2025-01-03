#include <stdio.h>
#pragma warning(disable:4996)

#define SIZE 10001

int main() {
    int arr[SIZE];

    for (int i = 1; i < SIZE; i++) {
        arr[i] = i;
    }

    int num = 1;
    for (int i = 1; i < SIZE; i++) {
        int num_copy = num;
        int value = 1000;
        int result = 0;

        for (int j = 0; j < 4; j++) {
            int mid = num_copy / value;
            num_copy %= value; value /= 10;
            result += mid;
        }
        result += num;
        
        if (result < SIZE) {
            arr[result] = 1111111;
        }

        num++;
    }

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < SIZE) printf("%d\n", arr[i]);
    }

    return 0;
}