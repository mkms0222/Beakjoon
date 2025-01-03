#include <stdio.h>
#include <string.h>

struct ITEM {
    char name[20];
    char type[20];
};
struct ITEM items[30];

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int m;
        int count = 0;

        scanf("%d", &m);
        for (int j = 0; j < m; j++) {
            scanf("%s %s", items[j].name, items[j].type);
        }

        count += m;

        for (int j = 0; j < m - 1; j++) {
            for (int k = j + 1; k < m; k++) {
                if (strcmp(items[j].type, items[k].type) != 0) {
                    count++;
                }
            }
        }

        printf("%d\n", count);
    }

    return 0;
}