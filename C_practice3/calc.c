#include <stdio.h>
int main(){
	int a[100]; //숫자를 입력 받을 배열 
	int num, i;
	int min = 100, max = 0, aver = 0, sum = 0;
	
	printf("입력할 숫자의 개수를 입력하세요.: ");
	scanf("%d", &num); //입력할 숫자의 개수 받음 
	
	for(i=0; i<num; i++){ 
		scanf("%d", &a[i]); //값을 하나씩 입력 받아서 배열에 하나씩 저장 
		
		if(min > a[i]){ //입력 받은 값들을 하나 씩 비교하여 최소값 구함 
			min = a[i];
		}
		
		if(max < a[i]){ //입력 받은 값들을 하나 씩 비교하여 최대값 구함 
			max = a[i];
		}
		
		sum += a[i]; //입력받은 값을 모두 더 해서 sum에 저장 
	}
	
	aver = sum/num; //평균값 계산 
			
	printf("최소값: %d\n", min);
	printf("최대값: %d\n", max);
	printf("평균값: %d\n", aver);
	
	return 0;
}
