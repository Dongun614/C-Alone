/*
문제: 섭씨 온도를 화씨 온도로 변환
섭씨 온도를 입력받아 이 값을 화씨온도로 변환하여 출력하라
*/

/*
생각후코딩
1. 섭씨 온도를 입력받는다.
    1.1 변수 필요
2. 화씨로 변환
    2.1 화씨 값 담을 변수 필요
*/

#include <stdio.h>

int main(){
    float c_degree;
    float f_degree;

    printf("섭씨 온도를 입력해주세요: ");
    scanf("%f", &c_degree);
    f_degree = c_degree * 1.8 + 32;
    printf("%.1f\n", f_degree);
    
    return 0;
}