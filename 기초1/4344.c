#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

double average(int *N) {
    int sum = 0; // 전체 점수 더한 값
    int count = 0; // 평균 넘은 학생 수
    int student_num = N[0];

    for (int i = 1; i <= student_num; i++){ //포인터랑 정수를 비교했대
        sum += N[i];
    }
    double result = (double)sum / student_num; //평균값

    for (int i = 1; i <= student_num; i++){
        if (N[i] > result) count++;
    }
    
    double percent = (double)count / student_num * 100;
    return percent;
}

int main() {
    int C; // 테스트 케이스의 개수
    scanf("%d", &C);

    for (int i = 0; i < C; i++){
        int student_num;
        scanf("%d", &student_num);
        int *N = (int *)malloc((student_num+1) * sizeof(int));
        N[0] = student_num;
        
        for (int j = 1; j <= student_num; j++) {
            scanf("%d", &N[j]);
        }

        printf("%.3f%%\n", average(N));
        free(N);
    }

    return 0;
}