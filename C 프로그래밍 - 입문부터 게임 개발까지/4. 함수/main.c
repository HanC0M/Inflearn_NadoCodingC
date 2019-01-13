#include<stdio.h>

// 선언
void p(int num);
void function_without_return();
int function_with_return();
void function_without_param();
void function_with_param(int num1, int num2, int num3);
int apple(int num1, int num2);
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

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

	// 파라미터(매개변수)가 없는 함수
	/*
	function_without_param();
	*/

	// 파라미터(매개변수)가 있는 함수
	/*
	function_with_param(24,25,62);
	*/

	// 파라미터(매개변수)가 있고, 반환값이 있는 함수
	/*
	int ret = apple(5,2); // 5개의 사과중에 2개를 먹었다.
	// printf("사과 5개 중에 2개를 먹으면 %d개가 남아요\n",ret);
	printf("사과 %d개 중에 %d개를 먹으면 %d개가 남아요\n", 10, 4, apple(10, 4)); // printf내에서의 함수의 사용
	*/

	// 함수를 이용한 계산기
	/*
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);
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
void function_without_param() {
	printf("매개변수가 없는 함수입니다\n");
}
void function_with_param(int num1, int num2, int num3) {
	printf("매개변수가 있는 함수이며, 값은 %d, %d, %d 입니다.\n", num1, num2, num3);
}
int apple(int num1, int num2) {
	return num1 - num2;
}
int add(int num1, int num2) {
	return num1+num2;
}
int sub(int num1, int num2) {
	return num1 - num2;
}
int mul(int num1, int num2) {
	return num1 * num2;
}
int div(int num1, int num2) {
	return num1 / num2;
}

// 함수의 기본 형태
/*
반환형 함수이름(매개변수){

}
*/