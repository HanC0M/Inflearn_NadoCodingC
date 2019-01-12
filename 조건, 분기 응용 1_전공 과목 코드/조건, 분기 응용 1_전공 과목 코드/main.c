// 전공 과목 코드를 입력받아 1이면 국어, 2이면 수학, 3이면 영어를 표시하는 프로그램을 만드세요.

#include<stdio.h>
int main(void) {
	int code = 0;
	printf("과목 코드를 입력하세요.\n1-국어\n2-수학\n3-영어\n");
	scanf("%d", &code);

	// if문
	/*if (code == 1) {
		printf("국어\n");
	}
	else if (code == 2) {
		printf("수학\n");
	}
	else if (code == 3) {
		printf("영어\n");
	}
	else {
		printf("잘못된 값이 입력되었습니다.\n");
	}*/
	
	// switch문
	switch (code)
	{
	case 1:printf("국어\n");
		break;
	case 2: printf("수학\n");
		break;
	case 3: printf("영어\n");
		break;

	default:
		printf("잘못된 값이 입력되었습니다.\n");
		break;
	}

	return 0;
}