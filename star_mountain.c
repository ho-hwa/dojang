//표준 입력으로 삼각형의 높이가 입력됩니다(입력 값의 범위는 3~10). 
//입력된 높이만큼 산 모양으로 별을 출력하는 프로그램을 만드세요
//(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다). 

#include <stdio.h>

int main(){

	int x;
	scanf("%d",&x);

	if(x>=3 && x<=10){

		for(int i = 0; i < x; i++){
			for(int j = 0 ; j < x-i-1; j++){
				printf(" ");
				}

			for(int j = 0; j < 2*i+1; j++){
				printf("*");

				}
				printf("\n");

		}

	return 0;

	}
}

