#include <stdio.h>
#pragma warning(disable:4996)

// 반복문 사용
int main(){ 
    int N;
    int count = 0;

    scanf("%d", &N); //N은 0보다 크거나 같고, 99보다 작거나 같은 정수

    int front = N;
    int rear = -1;

    while (rear != N) {
        int front_1 = front / 10; //십의 자리 수
        int front_2 = front % 10; //일의 자리 수
        int front_result = front_1 + front_2; 

        rear = (front_2 * 10) + (front_result % 10);
        front = rear;

        count++;
    }
    printf("%d\n", count);

    return 0;
}

// 재귀 함수 사용
// int count = 0;

// int cycle(int N) {
//     int front = N, rear = -1;
//     int sum =  (front / 10) * 10 + front % 10;

//     if (sum != N) 
//     {

//     }
//     count ++;
//     return count;
// }

// int main () {
//     int N;
//     scanf("%d", &N);

//     printf("%d", cycle(N));
// }