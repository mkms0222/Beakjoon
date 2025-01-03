#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M; //N은 재료의 개수, M은 갑옷을 만드는데 필요한 수

    scanf("%d", &N);
    scanf("%d", &M);

    int *line = malloc((N + 1) * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &line[i]);
    }

    int count = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (line[i] + line[j] == M) {
                count++;
                break;
            }
        }
    }
    
    printf("%d", count);

    free(line);

    return 0;
}