#include <stdio.h>
int main(){
	int a[100]; //���ڸ� �Է� ���� �迭 
	int num, i;
	int min = 100, max = 0, aver = 0, sum = 0;
	
	printf("�Է��� ������ ������ �Է��ϼ���.: ");
	scanf("%d", &num); //�Է��� ������ ���� ���� 
	
	for(i=0; i<num; i++){ 
		scanf("%d", &a[i]); //���� �ϳ��� �Է� �޾Ƽ� �迭�� �ϳ��� ���� 
		
		if(min > a[i]){ //�Է� ���� ������ �ϳ� �� ���Ͽ� �ּҰ� ���� 
			min = a[i];
		}
		
		if(max < a[i]){ //�Է� ���� ������ �ϳ� �� ���Ͽ� �ִ밪 ���� 
			max = a[i];
		}
		
		sum += a[i]; //�Է¹��� ���� ��� �� �ؼ� sum�� ���� 
	}
	
	aver = sum/num; //��հ� ��� 
			
	printf("�ּҰ�: %d\n", min);
	printf("�ִ밪: %d\n", max);
	printf("��հ�: %d\n", aver);
	
	return 0;
}
