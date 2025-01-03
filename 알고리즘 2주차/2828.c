#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int j; //떨어지는 사과의 개수
    scanf("%d", &j);

    int* arr = malloc(j * sizeof(int));
    for (int i = 0; i < j; i++) {
        scanf("%d", arr[i]);
    }

    

    return 0;
}