#include <stdio.h>

int main(void)
{
	int a = 10;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a); 
	
	int b = 20;
	printf("B�� %d\n", ++b); //b = b + 1
	printf("B�� %d\n", b++); // 21 + 1
	printf("B�� %d\n", b); // 22���
	
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
