#include <stdio.h>

int main(void)
{
	int input;
	printf("값을 저장하세요 : ");
	scanf("%d", &input); //뒤에 변수에다는 &(주소연산자)는 뒤에 변수에다가 값을 저장
	printf("입력값은",input); //입력값 출력
	
	return 0;
}
