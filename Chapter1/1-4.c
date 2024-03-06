/*
문제: 직사각형의 가로 세로 크기를 입력 받아 넓이 계산
직사각형의 가로크기와 세로크기를 입력받아 
이 값을 이용하여 직사각형의 넓이를 계산하고 출력하라.
*/

/*
생각 후 코딩
1. 직사각형의 가로와 세로를 입력받는다.
    1.1 변수 2개 필요
2. 가로 * 세로를 통해 넓이를 구한다.
*/

#include <stdio.h>

int main(){
    int weight, height;
    int area;

    printf("가로길이와 세로길이를 입력해주세요 : ");
    scanf("%d %d", &weight, &height);

    area = weight * height;

    printf("%d\n", area);
    return 0;
}