#include <stdio.h>
#include <string.h>
#define SIZE 26

int main() {
    char word[100] = "";
    int count[SIZE] = {0,};
    scanf("%s", &word);

    for (int i = 0; i < strlen(word); i++) {
        count[word[i] - 97] += 1;
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", count[i]);
    }
    
    return 0;
}