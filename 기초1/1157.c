#include <stdio.h>
#include <string.h>

#define arr_size 1000000
#define alphabet_size 26

typedef struct bucket{
    char alphabet;
    int count;
}bucket;
struct bucket big_[alphabet_size];

int main() {
    char str[arr_size];
    scanf("%s", str);

    int arr[strlen(str)];
    for (int i = 0; i < strlen(str); i++) { //arr에 아스키 코드 값을 저장
        int mid = str[i] - 0;
        if (mid < 95) {
            arr[i] = mid;
        }
        else {
            arr[i] = mid - 32;
        }
    }

    for (int i = 65; i < 91; i++) {
        big_[i-65].alphabet = i;
        big_[i-65].count = 0;
    }

    for (int i = 0; i < strlen(str); i++) {
        for (int j = 0; j < alphabet_size; j++) {
            if (arr[i] == big_[j].alphabet) {
                big_[j].count++; break;
            }
        }
    }

    int max = 0, index = -1;
    int compare = 0;
    for (int i = 0; i < alphabet_size; i++) {
        // printf("%d ", big_[i].count);
        if (big_[i].count > max) {
            max = big_[i].count;
            index = i;
            compare = 0;
        }
        else if (big_[i].count == max) {
            compare = 1;
        }
    }

    if (compare) {
        printf("?");
    }
    else {
        printf("%c", big_[index].alphabet);
    }

    return 0;
}