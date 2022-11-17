#include <stdio.h>
int main(void)
{
	float f = 11.1f; //float값에는 f를 써야함
	printf("%.2f\n",f);  %.2는 소수 자리를 정할수있음 float은 %f
	
	double d = 1.569; //double은 f생략 가능
	printf("%.2lf\n",d); //%.2는 소수 자리를 정할수있음 double은 %lf

	return 0;
}
