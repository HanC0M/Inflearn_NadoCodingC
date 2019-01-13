#include<stdio.h>

// 선언
void p(int num);
void function_without_return();
int function_with_return();

int main(void) {
	// 함수
	// 계산기
	/*
	int num = 2;
	p(num);

	// 2+3은?
	num = num + 3;
	p(num); //5

	// 5-1은?
	num -= 1;
	p(num); //4

	// 4x3은?
	num *= 3;
	p(num); //12

	// 12/6은?
	num /= 6;
	p(num); //2
	*/

	// 함수 종류
	// 반환값이 없는 함수
	/*
	function_without_return();
	*/

	// 반환값이 있는 함수
	/*
	int ret = function_with_return();
	p(ret);
	*/



	return 0;
}

// 정의
void p(int num) {
	printf("num은 %d입니다\n", num);
}

void function_without_return() {
	printf("반환값이 없는 함수입니다\n");
}
int function_with_return() {
	printf("반환값이 있는 함수입니다\n");
	return  10;
}
// 함수의 기본 형태
/*
반환형 함수이름(매개변수){

}
*/