#include <stdio.h>
int main(){
	double x, y; //계산할 두 값을 입력 받을 변수를 선언

	printf("계산할 두 숫자를 입력하시오.([ex)3 4]\n");
	scanf("%lf %lf",&x, &y); //x와 y의 값을 입력 받음

	double sum = x+y; //x와 y의합을 sum에 저장
	double difference = x-y; //x와 y의 차를 difference에 저장
	double product = x*y; //x와 y의 곱을 product에 저장
	double quotient= x/y; //x를 y로 나눈 몫을 quotient에 저장

	printf("%.1lf + %.1lf = %.1lf\n", x, y, sum);//%.1lf는 소숫점 아래 1번째 자리까지 출력
	printf("%.1lf - %.1lf = %.1lf\n", x, y, difference);
	printf("%.1lf * %.1lf = %.1lf\n", x, y, product);
	printf("%.1lf / %.1lf = %.1lf\n", x, y, quotient);

	return 0;
}
