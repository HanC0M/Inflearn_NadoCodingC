#include<stdio.h>
#include<time.h>
int main(void) {
	// if, else
	/* // 버스를 탄다고 가정, 학생 / 일반인으로 구분 (일반인 <= 20세)
	int age = 25;
	if (age >= 20) {
		printf("일반인입니다\n");
	}
	else {
		printf("학생입니다\n");
	}*/

	// else if
	/* // 초등학생(8-13) / 중학생(14-16) / 고등학생(17~19)
	int age = 18;
	if (age >= 8 && age <= 13) {
		printf("초등학생입니다.\n");
	}
	else if (age >= 14 && age <= 16) {
		printf("중학생입니다.\n");
	}
	else if (age >= 17 && age <= 19) {
		printf("고등학생입니다.\n");
	}
	else {
		printf("초, 중, 고등학교 학생이 아닙니다\n");
	}*/

	// break
	/*// 1번부터 30번까지 있는 반에서 1번부터 5번까지 조별 발표를 한다.
	for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("나머지 학생은 집에 가세요.\n");
			break;       // 반복문을 탈출한다
		}
		printf("%d번 학생은 조별 발표 준비를 하세요.\n", i);
	}*/

	// continue
	/*// 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
	// 7번을 제외하고 6번부터 10번까지 조별 발표를 한다.
	for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d번 학생은 결석입니다.\n", i);
				continue;		// 이 다음의 줄은 실행하지 않고 다시 위로 올라간다
			}
			printf("%d번 학생은 조별 발표 준비를 하세요.\n", i);
		}
	}*/

	// AND 연산
	/*int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
    if (a == b || c == d) {
		printf("a와 b, 혹은 c와 d의 값이 같습니다.\n");
	}
	
	else {
		printf("값이 서로 다르네요..\n");
	}*/
	
	// 가위 = 0, 바위 = 1, 보 = 2
	/*
	srand(time(NULL));
	int i = rand() & 3; // 0~2 반환
	*/

	// if문으로 하면
	/*if (i == 0) {
		printf("가위\n");
	}
	else if (i == 1) {
		printf("바위\n");
	}
	else if (i == 2) {
		printf("보\n");
	}
	else {
		printf("몰라요\n");
	}*/

	// switch, case문으로 하면
	/*switch (i) {
	case 0: printf("가위\n"); break;

	case 1: printf("바위\n"); break;

	case 2: printf("보\n"); break;

	default: printf("몰라요\n"); break;
	}*/


	// 교통카드 문제를 switch case로
	/*int age = 18;
	switch (age) {
	case 8:							// break가 없으면 다음 것들을 그대로 실행함
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("초등학생입니다\n"); break;
	case 14:
	case 15:
	case 16:printf("중학생입니다\n"); break;
	case 17:
	case 18:
	case 19:printf("고등학생입니다\n"); break;
	default:printf("초, 중, 고등학교 학생이 아닙니다\n"); break;
	}*/

	//Up&Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~100까지의 숫자를 추출
	printf("숫자 : %d\n", num);
	int answer = 0; // 정답
	int chance = 5; // 기회
	while (1) {

		printf("남은 기회 %d번\n", chance);
		printf("숫자를 맞혀보세요 (1~100) : ");
		scanf("%d", &answer);

		if (answer > num) {
			printf("Down\n");
		}
		else if (answer < num) {
			printf("Up\n");
		}
		else if (answer == num) {
			printf("정답입니다\n");
		}
		else {
			printf("잘못된 입력\n");
		}
		chance--;
		if (chance == 0) {
			printf("모든 기회를 사용하셨네요.\n");
			break;
		}
		
	}
	return 0;
}