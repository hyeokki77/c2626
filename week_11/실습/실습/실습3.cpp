
#include <stdio.h>

// 가격 배열과 할인율을 받아 원 단위 미만을 버리고 할인 적용하는 함수
void apply_discount(int* price, int n, int percent) {
    for (int i = 0; i < n; i++) {
        // 할인된 가격 계산 (원 단위 미만 버림: 예시 20% -> * 0.8)
        // 정수 연산을 활용하여 (price[i] * (100 - percent)) / 100 로 계산
        price[i] = (price[i] * (100 - percent)) / 100;
    }
}

// 가격 출력 함수
void print_prices(int* price, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", price[i]);
    }
    printf("\n");
}

int main(void) {
    int prices[5] = { 12000, 8500, 3000, 45000, 990 };
    int percent;

    printf("할인율(%)을 입력하시오 : ");
    scanf_s("%d", &percent);

    printf("할인 전 : ");
    print_prices(prices, 5);

    apply_discount(prices, 5, percent);

    printf("할인 후 : ");
    print_prices(prices, 5);

    return 0;
}

