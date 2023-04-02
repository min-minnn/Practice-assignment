#include <stdio.h>

int main(){
	int yard;
	double meter;
	
	printf("거리를 입력하세요.(yard): "); 
	scanf("%d", &yard); //거리를 yard 로 입력 받음 
	meter = yard * 0.9144; // 1 yard는 0.9144 meter이기에 입력받은 yard 값에 0.9144 곱해줌
	
	printf("%d yard는 %.4f meter입니다.", yard, meter); //yard는 정수, meter는 실수 소수점 4번째 자리까지 출력  
	
	return 0;
}
