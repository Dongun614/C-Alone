/**
 1-1 태어난 년도로 나이 계산
 태어난 년도를 입력받은 후, 이 값을 이용하여 나이를 계산하고 출력하라
 나이는 올해년도 - 태어난 년도 즉, 만 나이로 계산한다
 **/

/**
 1. 태어난 년도를 입력받는다.
    1.1 입력된 값 담을 변수 필요
 2. 나이를 계산한다.
    2.1 기준연도 변수 필요
    2.2 나이 저장할 변수 필요
 3. 계산한 값을 출력한다. 
 **/

#include <stdio.h>
#include <time.h>

int main(){
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int birth_year;
    int age;
    int std_year = tm.tm_year + 1900;

    printf("태어난 년도를 입력해주세요 :");
    scanf("%d", &birth_year);
    age = std_year - birth_year;
    printf("당신의 나이는 %d 세 입니다.\n", age);
    return 0;
}