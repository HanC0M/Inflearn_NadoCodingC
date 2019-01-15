#include<stdio.h>

int main(void) {
	// 배열
	/*
	int subway_1 = 30; // 지하철 1호차에 30명이 타고 있다
	int subway_2 = 40;
	int subway_3 = 50;

	printf("지하철 1호차에 %d명이 타고 있습니다\n", subway_1);
	printf("지하철 2호차에 %d명이 타고 있습니다\n", subway_2);
	printf("지하철 3호차에 %d명이 타고 있습니다\n", subway_3);
	*/

	// 여러 개의 변수를 함께, 동시에 생성
	/*
	int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++) {
		printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i + 1, subway_array[i]);
	}
	*/

	// 값 설정 방법
	/*
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; // 값은 무조건 초기화를 해야 함
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	*/
	
	// 배열 크기는 항상 상수로 선언
	/*
	int size = 10;
	int arr[size];
	*/

	// 배열의 초기화 (하나라도 초기화 되었을 경우 나머지는 0으로 자동 초기화됨)
	/*
	int arr[10] = { 1,2 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	*/

	// int arr[]={1,2}; // arr[2]

	// 문자와 문자열
	
	/*
	char c = 'A';  // 문자
	printf("%c\n", c);
	*/
	// 문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0'이 포함되어야 함
	/*
	char string[7]="coding"; // [c][o][d][i][n][g][\0]
	printf("%s\n", string);

	char str[] = "coding";
	printf("%d\n", sizeof(str));

	for (int i = 0; i < sizeof(str); i++) {
		printf("%c\n", str[i]);
	}
	*/

	// 영어 1글자 = 1바이트, 한글 2글자 = 2바이트
	// char 자료형 크기 : 1byte
	
	// 문자열 심화
	/*
	char c_array[7] = { 'c','o','d','i','n','g','\0' };
	printf("%s\n", c_array);
	*/
	/*
	char c_array[10]= { 'c','o','d','i','n','g' };
	printf("%s\n", c_array);
	
	for (int i = 0; i < 10; i++) {
		printf("%c\n", c_array[i]);
	}
	
	for (int i = 0; i < 10; i++) {
		printf("%d\n", c_array[i]); // ASCII코드 출력
	}
	*/

	return 0; 
}