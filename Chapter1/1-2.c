/**
문제: 키와 몸무게로 비만도 계산
신장(cm 단위)과 체중(kg 단위)를 입력받은 후, 비만도를 계산하여 출력하라
비만도 수치 = 체중(kg) / (신장(m 단위)의 제곱)
**/

/**
생각후코딩
1. 신장을 입력받는다.
    1.1 변수 필요
2. 체중을 입력받는다.
    2.1 변수 필요
3. 비만도를 계산한다.
    3.1 신장은 0.01을 곱한 값을 제곱해준다.
**/

#include <stdio.h>

int main(){
    int height, weight;
    float bmi;

    printf("신장과 체중을 입력해주세요 : ");
    scanf("%d %d", &height, &weight);
    bmi = weight / ((height*0.01) * (height*0.01));
    printf("%.1f\n", bmi);
    return 0;
}