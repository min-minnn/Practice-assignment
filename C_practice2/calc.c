#include <stdio.h>
int main(){
	double x, y; //����� �� ���� �Է� ���� ������ ����

	printf("����� �� ���ڸ� �Է��Ͻÿ�.([ex)3 4]\n");
	scanf("%lf %lf",&x, &y); //x�� y�� ���� �Է� ����

	double sum = x+y; //x�� y������ sum�� ����
	double difference = x-y; //x�� y�� ���� difference�� ����
	double product = x*y; //x�� y�� ���� product�� ����
	double quotient= x/y; //x�� y�� ���� ���� quotient�� ����

	printf("%.1lf + %.1lf = %.1lf\n", x, y, sum);//%.1lf�� �Ҽ��� �Ʒ� 1��° �ڸ����� ���
	printf("%.1lf - %.1lf = %.1lf\n", x, y, difference);
	printf("%.1lf * %.1lf = %.1lf\n", x, y, product);
	printf("%.1lf / %.1lf = %.1lf\n", x, y, quotient);

	return 0;
}
