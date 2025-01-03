#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int result = 1;
    if (n != 0){
        for (int i = 1; i <= n; i++){
            result *= i;
        }
    }
    else ;
    printf("%d", result);

    return 0;
}