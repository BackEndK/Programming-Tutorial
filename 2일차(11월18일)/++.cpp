#include <stdio.h>

int main(void)
{
	int a = 10;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a); 
	
	int b = 20;
	printf("B는 %d\n", ++b); //b = b + 1
	printf("B는 %d\n", b++); // 21 + 1
	printf("B는 %d\n", b); // 22출력
	
	int c= 1;
	printf("Hello WOrld %d\n", c++); //1
	printf("Hello WOrld %d\n", c++); //2
	printf("Hello WOrld %d\n", c++);
	printf("Hello WOrld %d\n", c++);
	printf("Hello WOrld %d\n", c++);
	printf("Hello WOrld %d\n", c++);
	printf("Hello WOrld %d\n", c++);
	
	return 0;
}
