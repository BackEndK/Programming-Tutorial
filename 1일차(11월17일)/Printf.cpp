#include <stdio.h>

int main(void)
{
	int add = 3+7; //10
	printf("3+7= %d\n", add); //add가 %d\n에 대입되서 10 출력
	printf(" %d + %d=%d\n",3,7,3+7); //%d값에 3,7,3+7값을 대입되서 3+3=10이 출력
	printf("%d x %d = %d\n",10,10,10*10); // $d값에 10,10,10*10을 대입되서 10x10=100d이 출력
	return 0;
}
