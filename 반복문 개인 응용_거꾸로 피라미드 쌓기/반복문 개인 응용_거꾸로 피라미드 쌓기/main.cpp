// 거꾸로 된 피라미드의 층을 입력받아 세워보자
// 유희왕 천년퍼즐
/*
*******
 *****
  ***
   *
*/
#include<stdio.h>
int main(void) {
	int floor;
	printf("몇 줄의 천년 퍼즐을 만들것이냐?\n");
	scanf("%d", &floor); //층을 입력받음
	
	/*for (int i = 0; i < floor; i++) {		// 층만큼 층을 생성함
		for (int j = 0; j <= i - 1; j++) { // 공백을 생성하는 반복문.
			printf(" ");
		}
		for (int k = 0; k<2 * (floor - i) - 1; k++)
		{
			printf("*");
		}
			printf("\n");
	}*/
	for (int i = 0; i < floor; i++) {
		for (int j = 0; j <= i - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * (floor - i) - 1; k++) {
			printf("*");
		}
		printf("\n");
	}



	return 0;
}