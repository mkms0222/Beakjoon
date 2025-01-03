#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

#define SIZE 100

int main() {
    char string[SIZE];
    scanf("%s", string);
    // sting[0]: l, sting[1]: e, sting[2]: v, sting[3]: e, sting[4]: l

    int start = 0, end = strlen(string) - 1;
    while (1) {
        if (string[start++] == string[end--]) {
            if (start >= end) {
                printf("1"); break;
            }
        }
        else {
            printf("0"); break;
        }
    }
    return 0;
}