#include <stdio.h>

char* name;

int main() {
    int n;
    scanf("%d", &n);

    // n = value * 3 + rest 
    int value = n / 3;
    int rest = n % 3; 

    if (value % 2 == 1) {
        if (rest == 1) {
            name = "SK";
        }
        else {
            name = "CY";
        }
    } 
    else {
        if (rest == 1) {
            name = "CY";
        }
        else {
            name = "SK";
        }
    } 

    printf("%s", name);

    return 0;
}