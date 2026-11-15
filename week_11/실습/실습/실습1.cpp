
//과제 
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    int count = 0;

    printf("영문 문장을 입력하시오 : ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    // 입력받은 문자열의 개행문자('\n') 제거
    str[strcspn(str, "\n")] = '\0';

    for (char* p = str; *p != '\0'; p++) {
        // 대문자('A' ~ 'Z')인 경우 소문자로 변환
        if (*p >= 'A' && *p <= 'Z') {
            *p = *p + 32; // 또는 *p - 'A' + 'a'
        }
        // 공백이 아닐 때만 글자 수 카운트
        if (*p != ' ') {
            count++;
        }
    }

    printf("소문자 : %s\n", str);
    printf("글자 수(공백 제외): %d\n", count);

    return 0;
}