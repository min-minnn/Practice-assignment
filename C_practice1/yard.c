#include <stdio.h>

int main(){
	int yard;
	double meter;
	
	printf("�Ÿ��� �Է��ϼ���.(yard): "); 
	scanf("%d", &yard); //�Ÿ��� yard �� �Է� ���� 
	meter = yard * 0.9144; // 1 yard�� 0.9144 meter�̱⿡ �Է¹��� yard ���� 0.9144 ������
	
	printf("%d yard�� %.4f meter�Դϴ�.", yard, meter); //yard�� ����, meter�� �Ǽ� �Ҽ��� 4��° �ڸ����� ���  
	
	return 0;
}
