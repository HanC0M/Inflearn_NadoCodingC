#include<stdio.h>
int main(void) {
	// ++ 플플
	/*int a = 10;
	printf("a = %d\n", a);
	a++;
	printf("a = %d\n", a);*/

	/*int b = 20;
	printf("b=%d\n", ++b);
	printf("b=%d\n", b++);
	printf("b=%d\n", b);

	/*int i = 1;
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);*/

	// 반복문
	// for, while, do while
	// for(선언; 조건; 증감){  }
	/*for (int i = 1; i <= 10; i++) {
	printf("Hello World %d\n",i);
	}*/

	// while(조건){  }
	/*int i=1;
	while (i<=10) {
	printf("Hello World %d\n", i);
	i++;
	}*/

	// do{  } while(조건);
	/*int i=0;
	do {
	printf("Hello World %d\n", i++);
	} while (i<=10);*/

	// 2중 반복문
	/*for (int i = 1; i <= 3; i++) {
	printf("첫 번째 반복문 : %d\n", i);
	for (int j = 1; j <= 5; j++) {
	printf("	두 번째 반복문 : %d\n", j);
	}
	}*/

	// 구구단
	/*for (int i=2; i <= 9; i++) {
	printf("%d단\n",i);
	for (int j = 1; j <= 9; j++) {
	printf("%d x %d = %d\n", i, j, i*j);
	}
	}*/

	// 별찍기
	/*
	*
	**
	***
	****
	*****
	*/
	/*for (int i = 0; i < 5; i++) {
	for (int j = 0; j <= i; j++) {
	printf("*");
	}
	printf("\n");
	}*/

	// 거꾸로 별 찍기
	/*
	*
	**
	***
	****
	*****
	*/
	/*for (int i = 0; i < 5; i++) {
	for (int j = i; j < 5 - 1; j++) {
	printf(" ");
	}
	for (int k = 0; k <= i; k++) {
	printf("*");
	}
	printf("\n");
	}*/

	// 피라미드를 쌓아라! 프로젝트
	/*
	*
	***
	*****
	*******
	*********
	*/
	int floor;
	printf("몇 층으로 쌓겠느냐?\n");
	scanf("%d", &floor);
	for (int i = 0; i < floor; i++) {				// 층을 생성한다
		for (int j = i; j < floor - 1; j++) {		// 층-1만큼 공백 생성
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) { // 층*2+1만큼 별이 생성되어야 피라미드가 된다
			printf("*");
		}
		printf("\n");
	}

	return 0;
}